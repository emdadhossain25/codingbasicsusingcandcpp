#include <stdio.h>

int main()
{
    int sum = 0, n = 1;

    do
    {
        sum += n;
        n++;
    } while (n <= 10);
    printf("sum using do/while %d\n", sum);

    sum = 0;
    printf("sum reset %d\n", sum);


    for (int i = 10; i; i--)
    {
        sum += i;
    }
    printf("sum using for %d\n", sum);

    return 0;
}