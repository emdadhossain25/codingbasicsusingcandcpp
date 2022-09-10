#include <stdio.h>

int main()
{
    int num = 0;
    int input;
    for (int i = 0; i < 4; i++)
    {
        printf("enter %dth number\n", i + 1);
        scanf("%d", &input);
        if (input > num)
        {
            num = input;
        }
    }
    printf("biggest number is %d\n", num);
    return 0;
}