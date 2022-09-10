#include <stdio.h>

int main()
{
    int num, prime = 1;
    int i = 2;
    printf("enter number to check\n");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
            i++;
    }
    if (prime)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a  prime number\n", num);
    }
    return 0;
}