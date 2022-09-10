#include <stdio.h>

int fib(int n);
int main()
{
    int num;
    printf("enter number to calculate fibonacci series\n");
    scanf("%d", &num);
    printf("the value of fib %d is %d\n", num, fib(num));
    return 0;
}

int fib(int n)
{
    printf("%d\n",n);
    if (n <= 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n -2);
    }
}