#include <stdio.h>

int change(int b); // prototype
int main()
{
    int b = 77;
    printf("value of b before change %d\n",b);
    change(b); // function call
    printf("value of b after change %d\n",b);
    return 0;
}

// function definition
int change(int b)
{
    b = 77;
    return 0;
}