// factorial(n) = 1x2x3x4....x(n-1) x n;
// factorial(n) = factorial(n-1) x n;

#include <stdio.h>

int factorial(int n); // prototype of factorial

int main()
{
    int num;
    printf("enter number for factorial\n");
    scanf("%d", &num);
    int result = factorial(num);
    printf("factorial of %d using recursion is %d\n", num, result);
    return 0;
}

// definition of factorial using recursion
int factorial(int n)
{
    printf("calling factorial(%d)\n", n);
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        int result = n * factorial(n - 1);
        return result;
    }
}