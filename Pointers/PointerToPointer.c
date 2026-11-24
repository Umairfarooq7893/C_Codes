 /* 
        Author  : Umair Farooq
        Program : Pointer to pointer
*/
#include<stdio.h>
int main() {
/*  
    A pointer to pointer stores the 
    memory address of another pointer.
    Syntax: **pp  
*/
    int x = 10;        // normal variable
    int *ptr1;         // pointer to int
    int **ptr2;        // pointer to pointer to int

    ptr1 = &x;         // ptr1 stores address of x
    ptr2 = &ptr1;      // ptr2 stores address of ptr1
// Printing value
    printf("Value of x = %d\n", x);
    printf("Value of x using ptr1 =  %d\n", *ptr1 );
    printf("Value of x using ptr2 =  %d\n", **ptr2);

// Printing Address
    printf("Address of ptr1 = %p\n",ptr1);
    printf("Address stored in ptr2 = %p ",ptr2);

    return 0;
}

