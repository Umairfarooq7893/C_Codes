//For Loops
#include<stdio.h>
int main() {
    int num;
    num = 6;
    for(int i=1; i<=num; i++) {    // initialization; condition;incrementation
        printf("%d\n",i);         // body of loop
    }
    return 0;
}
//for loop repeats until condition is false. Best for known number of repetitions.
