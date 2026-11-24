#include<stdio.h>
#include<conio.h>
int main(){
    /*print the pattern
    1
    12
    123
    1234
    */

    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);

    for( int i = 1 ; i <=n;i++){
        for(int j =1 ; j <= i ; j++){ // inner loop will run 'i' times
            printf("%d",j); // print j, in same line , bez \n not used
        }
        printf("\n"); // after inner loop ends , print new line
    }
    return 0;
}