#include <stdio.h>

int main()
{
    int year;
    printf("enter year:\n");
    scanf("%d", &year);
    if (year % 100 == 0 && year % 400 == 0)
    {
        printf("leap year %d\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("leap year %d\n", year);
    }
    else
    {
        printf("not leap year %d\n", year);
    }
    return 0;
}