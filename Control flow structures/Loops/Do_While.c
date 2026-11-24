#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    do {
        printf("%d\n", num);      // body of loop
        num++;                   // update (increment)
    } while (num <= 5);          // condition
// no initialization needed for do-while loop
    return 0;
}
