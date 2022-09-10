#include <stdio.h>

int main(){
    int i;
    int idx=0;
    printf("enter the number\n");
    scanf("%d",&i);
    do{
        printf("number is %d\n",idx+1);
        idx++;
    }while(idx<i);
    return 0;
}