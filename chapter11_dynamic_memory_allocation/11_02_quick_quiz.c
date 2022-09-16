// write a program to create a dynamic array of 5 floats using malloc();
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(6 * sizeof(float));

    for (int i = 0; i < 6; i++)
    {
        printf("enter %d element\n",i+1);
        scanf("%f",&ptr[i]);
    }
    

     for (int i = 0; i < 6; i++)
    {
        printf("enter %d element is %f\n",i+1,ptr[i]);
        
    }
    return 0;
}