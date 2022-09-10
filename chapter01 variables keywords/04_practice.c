#include <stdio.h>

int main(){
    int principle=100, rate=4, years=1;
    int simpleInterest =  (principle* rate* years)/100;
    printf("the value of simple interest %d\n",simpleInterest);
    return 0;
}