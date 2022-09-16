// write a program to dynamically create a array of size 6 capable of storing 6 integers using calloc().
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)calloc(6,sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("enter the value of %d element\n",i+1);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d element is: %d\n",i+1,ptr[i]);
        
    }

    free(ptr);
    
    return 0;
}