#include <stdio.h>

int main(){

    // q1 write a program to print multiplication table of a given number n;
    int n;
    int i=1;
    printf("enter the number\n");
    scanf("%d",&n);
    while(i<11){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    
    return 0;
}