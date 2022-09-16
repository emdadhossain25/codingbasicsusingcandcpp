// write a program using malloc and free()
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter the number of integers you want to enter\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the %d th element:\n",i+1);
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("the %dth element is: %d\n",i+1,ptr[i]);
    }

    free(ptr);
    return 0;
}