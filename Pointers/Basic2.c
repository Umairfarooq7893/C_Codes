/*
   POINTER:
   A variable that stores the memory addresses of another variable
   Using *p, we can access or modify the value at that address.
*/
#include <stdio.h>
int main() {
// Declaring a simple variable
    int marks = 10;

// To declare a pointer, we use * in the declaration:
    int *p;          /* int *p means => p is a pointer */

// To make p, point to a variable, we use & (address-of operator):
    p = &marks;
/*
      marks stores the value 10
      &marks is the address of marks
      p = &marks ,now p stores the address of marks
      *p value at that address → 10
*/

//to print an address correctly, use " %p " format specifier
//and cast the address to (void*) to avoid warnings.
    printf("Address of marks = %p\n",(void*) &marks);
    printf("Address of marks = %p\n", p);

// printing values using Pointer
    printf("Value of marks =      %d\n", marks);
    printf("Value using pointer = %d\n", *p);
    printf("Value using pointer = %d\n", *(&marks));
    return 0;
}
