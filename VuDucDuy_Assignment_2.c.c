#include <stdio.h>
#include <stdlib.h>

struct my_USB {
    char usb_name[30];
    int real_capacity;
    int serial_number;
    int number_of_uses;
};

int main() {
    struct my_USB *usbPtr;
    int n;

    printf("Enter the number of USBs (n): ");
    scanf("%d", &n);

    // Memory allocation for n USB structures
    usbPtr = (struct my_USB *)malloc(n*sizeof(struct my_USB));

    for (int i=0; i<n; i++) {
        printf("Enter name for USB%d: ", i);
        scanf("%s", (usbPtr+i)->usb_name);

        printf("Enter your USB's Real Capacity, Serial number and Number of uses(separated by space): \n");
        scanf("%d %d %d", &(usbPtr+i)->real_capacity, &(usbPtr+i)->serial_number, &(usbPtr+i)->number_of_uses);

        while ((usbPtr+i)->real_capacity<0 || (usbPtr+i)->serial_number<0 || (usbPtr+i)->number_of_uses<0) {
            printf("Invalid input. Please enter positive values.\n");
            printf("Enter your USB's Real Capacity, Serial number and Number of uses(separated by space): \n");
            scanf("%d %d %d", &(usbPtr+i)->real_capacity, &(usbPtr+i)->serial_number, &(usbPtr+i)->number_of_uses);
        }

        printf("\n");
    }

    // Print out all USB information
    printf("All USB information:\n");
    for (int i=0; i<n; i++) {
        printf("USB %d\n", i+1);
        printf("Name: %s\n", (usbPtr+i)->usb_name);
        printf("Real Capacity: %d\n", (usbPtr+i)->real_capacity);
        printf("Serial Number: %d\n", (usbPtr+i)->serial_number);
        printf("Number of Uses: %d\n\n", (usbPtr+i)->number_of_uses);
    }

    // Print out USB with max uses
    int max_uses=0, max_index=0;
    for (int i=0; i<n; i ++) {
        if ((usbPtr+i)->number_of_uses > max_uses) {
            max_uses = (usbPtr+i)->number_of_uses;
            max_index = i;
        }
    }

    printf("USB with the most uses:\n");
    printf("Name: %s\n", (usbPtr+max_index)->usb_name);
    printf("Real Capacity: %d\n", (usbPtr+max_index)->real_capacity);
    printf("Serial Number: %d\n", (usbPtr+max_index)->serial_number);
    printf("Number of Uses: %d\n", (usbPtr+max_index)->number_of_uses);

    // Free up memory
    free(usbPtr);

    return 0;
}
