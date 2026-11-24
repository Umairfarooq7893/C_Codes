/*
    Author  : Umair Farooq
    Program : Types of Pointers (NULL, Wild, Dangling)

    Definitions:
    1) NULL Pointer:
       A pointer that does not point to any valid memory location.
       It is explicitly initialized with NULL.

    2) Wild Pointer:
       A pointer that is declared but not initialized.
       It contains a garbage (random) address.

    3) Dangling Pointer:
       A pointer that points to a memory location which has been
       deallocated or destroyed. 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*  NULL Pointer  */
    int *ptr1 = NULL;   // NULL pointer (points to nothing)

    if (ptr1 == NULL) {
        printf("ptr1 is a NULL pointer\n");
    }

    /*   Wild Pointer   */
    int *ptr2;   // Wild pointer (uninitialized)

    // Do NOT dereference ptr2
    printf("ptr2 is a wild pointer (uninitialized)\n");

    /*  Dangling Pointer  */
    int *ptr3 = (int *)malloc(sizeof(int));  // dynamic memory allocation
    *ptr3 = 50;

    printf("Value before free: %d\n", *ptr3);

    free(ptr3);    // memory released
    ptr3 = NULL;   // fixing dangling pointer

    printf("ptr3 memory freed and set to NULL\n");

    return 0;
}
