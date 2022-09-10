#include <stdio.h>

int sum(int a,int b);
int main(){
    int a=3,b=4;
    printf("the value of a+b is %d\n",sum(a,b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}