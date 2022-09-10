#include <stdio.h>

int main(){
    int a=3;
    // compiler take arguments from right to left so answer 5 5 3 in printf;
    printf("%d %d %d\n",a,++a,a++); 
    return 0;
}