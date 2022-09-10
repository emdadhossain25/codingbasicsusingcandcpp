#include <stdio.h>

int main()
{
    int age;
    int vipPass=0;
    vipPass=1;
    printf("Enter your age\n");
    scanf("%d", &age);

    if ((age <= 70 && age > 18) || !vipPass==1)
    {
        printf("you can drive\n");
    }
    else
    {
        printf("you can not drive\n");
    }

    // if (age == 50)
    // {
    //     printf("Half century\n");
    // }

    // assignment operator will return true as age is not 0
    // if (age = 50)
    // {
    //     printf("Half century\n");
    // }

    return 0;
}