#include <stdio.h>

int main(){
    int value;
    printf("enter the value of n\n");
    scanf("%d",&value);
    for(int i = 0; i<value;i++){
        printf("value of i is %d\n",i);
    }
    return 0;
}