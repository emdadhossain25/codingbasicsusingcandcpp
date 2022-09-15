// malloc() -> stands for memory allocation takes an input of number of bytes and returns a pointer of type void
// calloc()
// free()
// realloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // sizeof operator on c
    //  printf("the size of int on my pc is %d\n",sizeof(int));
    //  printf("the size of char on my pc is %d\n",sizeof(char));
    //  printf("the size of float on my pc is %d\n",sizeof(float));
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("enter the value of %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d element is: %d\n",i,ptr[i]);

    }
    
    return 0;
}