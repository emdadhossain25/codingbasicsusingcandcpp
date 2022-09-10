#include <stdio.h>

int main()
{
    int i = 10;
    // here is only single = to assignment and not 0 will be thought as true
    if (i = 11)
    {
        printf("i is 11\n");
    }
    else
    {
        printf("i is not 11\n");
    }   
    return 0;
}