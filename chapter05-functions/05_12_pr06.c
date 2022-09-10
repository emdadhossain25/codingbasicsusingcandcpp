#include <stdio.h>

int sumOfNumber(int n); // prototype
int main(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("the sum of %d is %d\n",n,sumOfNumber(n));
    return 0;
}

int sumOfNumber(int n){
    if(n<1){
        //base condition
        return 0;
    }else{
        return n+sumOfNumber(n-1);
    }
}