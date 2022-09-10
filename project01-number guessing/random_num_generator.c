#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    srand(time(0)); // initializitation for time 
    num=rand()%100 +1; // generate random number between 1 t0 100
    printf("the number is %d\n",num);
    return 0;
}