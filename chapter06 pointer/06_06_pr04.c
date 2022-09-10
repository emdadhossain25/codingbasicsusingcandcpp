#include <stdio.h>

void printAvgSum(int a, int b, int *sum, float *avg);
int main()
{
    int a, b, sum;
    float avg;
    printf("enter value of a and b\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printAvgSum(a, b, &sum, &avg);

    printf("sum of a and b %d\n", sum);
    printf("avg of a and b %f\n", avg);
    return 0;
}

void printAvgSum(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}