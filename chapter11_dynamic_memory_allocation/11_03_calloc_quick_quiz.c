// write a program using calloc to enter 5 integers from user input;

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("how many integers do you want to enter?\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:\n",i+1);
        scanf("%d",&ptr[i]);
    }
    


    for (int i = 0; i < n; i++)
    {
        printf("element %d is: %d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}