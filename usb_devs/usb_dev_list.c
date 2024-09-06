#include <stdio.h>
// #include <libusb.h>
#include <C:/CTOOLS/libusb-1.0.27/include/libusb.h>

#define TIMEOUT (1000)
#define INTERFACE_NUM (2)

int r, rr, rrr;

int main(){

    libusb_device **devs;
    libusb_context *ctx = NULL;
    struct libusb_device_descriptor descriptor;
    struct libusb_config_descriptor *config;
    libusb_device_handle *handle = NULL;

    r = libusb_init(&ctx);
    
    if (r < 0){
        fprintf(stderr, "Error initializing libusb: %s\n", libusb_error_name(r));
        return 1;
    }

    ssize_t cnt = libusb_get_device_list(ctx, &devs);

    if (cnt < 0){
        fprintf(stderr, "Error getting USB list: %s\n", libusb_error_name(cnt));
        libusb_exit(ctx);
        return 1;
    }else{
        printf("\nCount of USB-Devices: %d\n", cnt);        
        for (int i = 0; i < cnt; i++){
            libusb_device *device = devs[i];
            r = libusb_get_device_descriptor(device, &descriptor);
            // Error case
            if (r < 0){
                fprintf(stderr, "Failed to get descriptor: %s\n", libusb_error_name(r));
            }else{
                // Getting information of connected devices
                if ((libusb_open(device, &handle) == 0) && (handle)){
                    unsigned char product[256];
                    libusb_get_string_descriptor_ascii(handle, descriptor.iProduct, product, sizeof(product));
                    printf("Device connected: VID 0x%04X | PID 0x%04X\n", descriptor.idVendor, descriptor.idProduct);
                    printf("Product: %s\n", product);
                    printf("Number of configurations: %d\n", descriptor.bNumConfigurations);
                    libusb_get_active_config_descriptor(device, &config);
                    printf("Number of interfaces: %d\n", config->bNumInterfaces);
                    // Getting information of interfaces
                    for (int j = 0; j < config->bNumInterfaces; j++){
                        const struct libusb_interface *interface = &config->interface[j];
                        printf("\tInterface: %d\n", j);
                        // Getting information of altsettings of interfaces
                        for(int k = 0; k < interface->num_altsetting; k++){
                            const struct libusb_interface_descriptor *altsetting = &interface->altsetting[k];
                            printf("\t\tAltsetting: %d\n", k);
                            printf("\t\t\tInterface Number: %d\n", altsetting->bInterfaceNumber);
                            printf("\t\t\tNumber of Endpoints: %d\n", altsetting->bNumEndpoints);
                            printf("\t\t\tInterface Class: %d\n", altsetting->bInterfaceClass);
                            printf("\t\t\tInterface Sub-Class:%d\n", altsetting->bInterfaceSubClass);
                            printf("\t\t\tInterface Protocol: %d\n", altsetting->bInterfaceProtocol);
                            // Getting information of interface's endpoints
                            for(int l = 0; l < altsetting->bNumEndpoints; l++){
                                const struct libusb_endpoint_descriptor *endpoint = &altsetting->endpoint[l];
                                printf("\t\t\tEndpoint: %d\n", l);
                                printf("\t\t\t\tEndpoint Address: 0x%02X\n", endpoint->bEndpointAddress);
                                printf("\t\t\t\tEndpoint Attributes: 0x%02X\n", endpoint->bmAttributes);
                                printf("\t\t\t\tEndpoint Max Packet Size: %d\n", endpoint->wMaxPacketSize);
                                printf("\t\t\t\tInterval: %d\n", endpoint->bInterval);
                            }
                        }
                    }
                    libusb_free_config_descriptor(config);
                    libusb_release_interface(handle, INTERFACE_NUM);
                    libusb_close(handle);
                }else{
                    // printf("Cannot open device\n");
                }
            }
        }
    }

    libusb_free_device_list(devs, 1);
    libusb_exit(ctx);

    return 0;
}