// calloc stands for contineous blocks wise memory allocation with a default memory allocation of
// 0 bytes. 
// ptr = (float *)calloc(30,sizeof(float)) syntax

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)calloc(6, sizeof(float));

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