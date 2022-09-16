// create a multiplication table upto 10 then use realloc() to store upto 15
// for 7 multiplication table;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num = 7;
    ptr = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7x%d= %d\n", i + 1, ptr[i]);
    }
        printf("\n\n");

    ptr = realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7x%d= %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}