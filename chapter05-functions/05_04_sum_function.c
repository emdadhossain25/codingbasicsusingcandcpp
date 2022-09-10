#include <stdio.h>

// this is a function which takes two input and returns int 
int sum(int a, int b);//function prototype declaration

int main(){
    int c =sum(4,5);
    printf("the value of c in %d\n",c);
    return 0;
}

int sum(int a,int b){
    return a+b;
}