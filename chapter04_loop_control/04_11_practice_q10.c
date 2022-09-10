#include <stdio.h>

int main()
{
    // prime numbers = only divisible by 1 or by itself (should be greater then 1).
    //  this is not the best solution to this problem.
    int num, prime = 1;

    printf("enter the number to test\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime\n", num);
    }
    else
    {
        printf("%d is not a prime\n", num);
    }

    return 0;
}