#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=4; j++) {
            printf("i = %d , j = %d\n", i, j);
// for every iteration of outer loop, inner loop runs completely
        }
        printf("\n"); // Print a new line after inner loop is done once
    }
    return 0;
}