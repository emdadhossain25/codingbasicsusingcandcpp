#include <stdio.h>

int main(){
    int skip=5;
    int i=0;
    while(i<10){
            i++;
        if(i!=skip){
            continue;
        }else{
            printf("i is %d\n",i);
        }
    }
    return 0;
}