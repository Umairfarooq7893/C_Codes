#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=0 ; i<=5;i++){
        for(int j = 1; j<=5;j++){
            printf("*\t");
        }
         printf("\n"); // to print new line after each inner loop completion
    }    
    return 0;
}