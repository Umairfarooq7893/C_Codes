#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    p = &x;
    printf("Address of x (hex): %p\n", &x);    // &x gives hexadecimal
    printf("Address of x: %u\n", &x);          // &x gives decimal
    printf("Value of p (address of x) : %p\n", p);

// printing value stored at address inside p (dereferencing)
    printf("Value at address stored in p: %d\n", *p); 

    return 0;
}
