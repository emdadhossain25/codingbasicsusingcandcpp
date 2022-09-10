#include <stdio.h>

int main(){
    int i =5;
    printf("the value after i++ is %d\n",i++);
    // i++ //first print then increment;
    // ++i// firs increment then print;
    i+=10; //value of i is incremented by 10;
    printf("the value of i is %d\n",i);
    return 0;
}