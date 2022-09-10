#include <stdio.h>

int main()
{

    // q1
    //  int a; b=a;
    int v = 3 ^ 3;
    printf("value of v %d\n", v);

    // q2
    float d = (3.0 / 8 - 2);
    printf("value of d is %f\n", d);

    // q3
    int divident;
    printf("please enter the number \n");
    scanf("%d", &divident);

    printf("divisibility test returns: %d\n", divident % 97);


    //q4
    int x=2, y=3,z=3,k=1;
    printf("value of 3*x/y-z+k is %d\n",3*x/y-z+k);
    //3*x/y-z+k
    //3*2/3-3+1
    //6/3-3+1
    //2-3+1
    //-1+1
    //0

    return 0;
}