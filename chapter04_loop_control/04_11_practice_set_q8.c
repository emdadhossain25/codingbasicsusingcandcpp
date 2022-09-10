#include <stdio.h>

int main(){
    int factorial=1;
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    while(num){
        factorial*=num;
        num--;
    }
    printf("factorial is %d\n",factorial);
    return 0;
}