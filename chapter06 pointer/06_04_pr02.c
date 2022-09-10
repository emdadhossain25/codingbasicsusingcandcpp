#include <stdio.h>

void passVariable(int *a);
int main(){
    int i;
    printf("the address of i is %u\n",&i);
    passVariable(&i);
    return 0;
}

void passVariable(int *a){
    printf("the address of i is %u\n",a);
}