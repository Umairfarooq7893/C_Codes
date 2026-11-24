/* 
    Author    : Umair Farooq
    Question3 : Pointer 
*/

// A pointer is a special variable in C that stores the address of another variable.
// Using *p, we can access or modify the value at that address.
// To declare a pointer, we use * in the declaration
#include <stdio.h>

int main() {
// declaring normal variable
    int a = 5;

// declaring pointer
    int *p;

// storing address of a in pointer p
// p is a pointer , it stores only address
    p = &a;  

    printf("Value of a = %d\n", a);
    printf("Pointer p stores address =  %p\n", p);
    printf("Value using pointer (*p) = %d\n", *p);

    return 0;
}
