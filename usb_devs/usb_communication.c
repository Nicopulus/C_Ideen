#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <libusb.h>

uint32_t const VENDOR_ID = 0x2E8A;
uint32_t const PRODUCT_ID = 0x000A;

libusb_context *ctx = NULL;
libusb_device_handle *dev_handle = NULL;
int r;

int main(){

    r = libusb_init(&ctx);
    
    if (r < 0){
        printf("Error initializing libusb\n");
        return 1;
    }

    dev_handle = libusb_open_device_with_vid_pid(ctx, VENDOR_ID, PRODUCT_ID);

    if (dev_handle == NULL){
        printf("Cannot open device\n");
        libusb_exit(ctx);
        return 1;
    }
    printf("Device opened successfully. Ready to work!\n");
    
    printf("Using USB device\n");

    libusb_close(dev_handle);
    libusb_exit(ctx);

    return 0;
}

