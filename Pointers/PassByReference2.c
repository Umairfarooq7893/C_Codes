/*     
        Author  : Umair Farooq
        Program : Concept Question
*/
#include<stdio.h>

// declaring the function
void update(int *x, int *y); // *x and *y are parameters

int main() {
// declaring two normal variables
    int a, b;
// Getting input from user
    scanf("%d%d", &a, &b);
// Displaying value of a and b
printf("a = %d, b = %d \n",a,b);

// declaring pointers
    int *ptr1 ;
    int *ptr2 ;
    ptr1 = &a;
    ptr2 = &b;

//  calling function ,by passing address
    update(ptr1, ptr2);

//  printing result after calling
    printf("a = %d\nb = %d", a, b);

    return 0;
}

// Definition of Function
void update(int *x, int *y) {
// address is passed , to convert into value ,* is used
    /*
       In main    In function    Meaning
        ptr1             x         pointer to a (address of a)
        ptr2             y         pointer to b (address of b)
       *ptr1            *x         value of a
       *ptr2            *y         value of b
    */
    int sum  = (*x + *y);     // calculate sum , *x is value
    int diff = (*x - *y);     // calculate difference

// For absolute difference
    if (diff < 0){
        diff = -diff; 
    }

    *x = sum;
    *y = diff;

}
