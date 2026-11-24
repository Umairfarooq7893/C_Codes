/*  
    Author  : Umair Farooq
    Program : Array Pointer
*/
#include <stdio.h>

int main() {

    // Declaring and initializing an integer array
    int arr[5] = {10, 20, 30, 40, 50};

/*  lets assume
    Address     Value
    1000        10
    1004        20
    1008        30
    1012        40
    1016        50
*/

    // Declaring a pointer to an integer
    int *ptr;

    // Assigning base address(first element address) of array to pointer
    // arr gives address of first element i.e. &arr[0]
    // and &arr gives address of whole string

    ptr = arr;

    // Accessing array elements using pointer
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i + 1, *(ptr + i));
    }
    /* why (ptr + i)
When i = 0        When i = 1 (ptr + 1 does NOT mean 1000 + 1)      when n = 2 
*(ptr + 0)        1000 + (1 × size of int)m                        similarly hota h
= *(1000)         1000 + (1 × 4) = 1004
= 10              *(ptr + 1) = value at address 1004 = 20
*/

    // Printing addresses to show relation between array and pointer
    printf("\nAddress of arr[0] : %p\n", (void*)&arr[0]);
    printf("Value stored in ptr: %p\n", (void*)ptr);

    return 0;
}

