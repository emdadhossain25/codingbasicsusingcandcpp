// write a program using calloc to enter 5 integers from user input;

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("enter %d element:\n",i+1);
        scanf("%d",&ptr[i]);
    }
    


    for (int i = 0; i < 5; i++)
    {
        printf("element %d is: %d\n",i+1,ptr[i]);
    }
    return 0;
}