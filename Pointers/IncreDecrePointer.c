/*     
        Author  : Umair Farooq
        Program : BasicQuestion 
*/
#include<stdio.h>
int main() {
    int  x = 5;
    int *ptr;
    ptr = &x;

    printf("value of x\n",*ptr);

// Now Giving some incrementation
    *ptr = *ptr + 5;
    printf("Value at the address stored in ptr after incremented by 5 = %d\n", *ptr);

    (*ptr) ++;
    printf("Value at the address stored in ptr after incremented by 1 = %d\n", *ptr);

    return 0;
}