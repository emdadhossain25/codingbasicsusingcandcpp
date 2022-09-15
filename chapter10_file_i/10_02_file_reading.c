#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Emdad.txt","r");
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d\n",num);
    return 0;
}