#include <stdio.h>

int main(){
    int i=4;
    int *j=&i;
    

    printf("the address of variable i is %u\n",j);
    printf("the value of variable i is %d\n",*j);
    return 0;
}