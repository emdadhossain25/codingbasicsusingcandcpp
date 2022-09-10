#include <stdio.h>

int main(){
        //q2 write a program to print multiplication table of 10 in reverse order;
    int n=10;
    int i =10;
    while(i>0){
        printf("%d x %d is %d\n",n,i,n*i);
        i--;
    }
    return 0;
}