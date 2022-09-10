#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4, b = 8;

    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a*b is %d\n", a * b);
    printf("the value of a/b is %d\n", a / b);

    int z;
    z = b * a; // legal
    // b *a = z;  // illegal

    printf("the value of z is %d\n", z);

    printf("5 divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("5 divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 divided by 2 leaves a remainder of %d\n", 5 % -2);
    // printf("5 divided by 2 leaves a remainder of %d\n", (4).(5)); --> wrong will not return 20
    printf("4 multiplied by 5 is %d\n", 4 * 5);                  // right will return 20
    printf("there is no exponential operator in c %d\n", 4 ^ 5); // invalid will not return
    printf("the value of 4 to the power 5 %f\n", pow(2, 5));     // valid will return 4 to the power 5

    printf("the value of 5 and 6 is %d\n", 5 + 6);
    printf("the value of 5 and 6.5 is %f\n", 5 + 6.5);
    printf("the value of 3.0 divided 9 is %f\n", 3.0/9);
    return 0;
}