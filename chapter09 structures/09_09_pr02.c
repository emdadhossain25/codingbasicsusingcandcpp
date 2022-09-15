#include <stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 4;
    v1.y = 9;
    printf("v1 dim x is %d, v1 dim y is %d\n", v1.x, v1.y);
    v2.x = 4;
    v2.y = 5;
    printf("v2 dim x is %d, v2 dim y is %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("x dim of result is %d,  y dim of result is %d\n", sum.x, sum.y);
    return 0;
}