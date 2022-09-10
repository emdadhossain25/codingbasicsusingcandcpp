#include <stdio.h>

int main(){
    int n=10,factorial=1;
    for(int i=n;i;i--){
        factorial*=i;
    }
    printf("factorial of %d is %d\n",n,factorial);
    return 0;
}