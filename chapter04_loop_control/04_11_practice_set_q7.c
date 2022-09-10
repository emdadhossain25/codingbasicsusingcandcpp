#include <stdio.h>

int main(){
    int n=8;
    int sum=0;
    int i=10;
    while(i){
        sum+=n*i;
        i--;
    }
    printf("sum of table of 8 is %d\n",sum);
    return 0;
}