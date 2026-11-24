/*  
    Author  : Umair Farooq
    Program : Basic example of char pointer
*/
#include <stdio.h>
int main() {
// normal character variable
    char N = 'A';
// character pointer
    char *p;    
// pointer storing address of N     
    p = &N; 
// printing value and address
    printf("Value of N        = %c\n", N);
    printf("Value using *p    = %c\n", *p);   // dereferencing
    printf("Address of N      = %p\n", &N);
    printf("Address stored in p = %p\n", p);
    return 0;
}
