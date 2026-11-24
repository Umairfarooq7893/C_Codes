 /*  
        Author  : Umair Farooq
        Program : Change value of 'a' using pass-by-reference
*/
#include <stdio.h>

void changeValue(int *ptr);// *ptr is PARAMETER

int main() {
    int a = 5;

    printf("Before calling function, a = %d\n", a);

    // Passing the Address of 'a' to the function
    // &a means "address of a" = ptr
    changeValue(&a);

    printf("After calling function, a = %d\n", a);

    return 0;
}

void changeValue(int *ptr) { // *ptr IS A PARAMETER
    /*  
           ptr  = &a    -> ptr stores address of 'a'.
           *ptr = a     -> because *ptr means "value at that address"

        When we write *ptr = 20:
           - We are NOT changing ptr
           - We are changing the VALUE stored at the address ptr
    */
    *ptr = 20;   // modify the original variable 'a'
}

