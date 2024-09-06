#include <stdio.h>
// #include <libusb.h>
#include <C:/CTOOLS/libusb-1.0.27/include/libusb.h>

uint32_t const VID = 0x2E8A;
uint32_t const PID = 0x000A;

libusb_context *ctx = NULL;
libusb_device_handle *handle = NULL;
int rc;

int main(){

    rc = libusb_init(&ctx);
    
    if (rc != 0){
        printf("Error initializing libusb: %s\n", libusb_error_name(rc));
        return 1;
    }

    handle = libusb_open_device_with_vid_pid(ctx, VID, PID);

    if (handle == NULL){
        printf("Cannot open device\n");
        libusb_exit(ctx);
        return 1;
    }
    printf("Device opened successfully. Ready to work!\n");
    
    printf("Using USB device\n");

    libusb_close(handle);
    libusb_exit(ctx);

    return 0;
}

