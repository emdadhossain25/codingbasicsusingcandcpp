#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;
    printf("the value of i is %d\n", i);
    printf("value of i is %d\n", *j); // value of address operator
    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", j);
    printf("the address of j is %u\n", &j);
    printf("the value of j is %u\n", *(&j)); // value of j is address of i for pointer we use &* both
    return 0;
}