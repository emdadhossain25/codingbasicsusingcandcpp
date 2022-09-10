#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **ptr_ptr;
    scanf("%d", &i);
    ptr = &i;
    ptr_ptr = &ptr;

    // printf("the value of i is %d\n", *ptr);
    printf("the value of i is %d\n", **ptr_ptr);
    return 0;
}