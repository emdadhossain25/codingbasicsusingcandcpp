#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr=marks; // can also be initialized using pointer and arrays.
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of marks for student %d: \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("marks for %d student is : %d \n", i + 1, marks[i]);
    }
    return 0;
}