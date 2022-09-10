#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    printf("the value of 3*x - 8*y is %d\n", 3 * (x - 8 * y));
    printf("the value of 3*x / 8*y is %d\n", 3 * x / 8 * y);
    printf("the value of 8 * y / 3 * x is %d\n", 8 * y / 3 * x);

    // 8 * y / 3 * x will give answer 16 (left to right associative order will be followed for same power *. /, %)
    // 8*3/3*2
    // 24/3*2
    // 8*2
    // 16 (left to right associtivity)
    return 0;
}