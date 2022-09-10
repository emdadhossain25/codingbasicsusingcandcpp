#include <stdio.h>
// force on body mass with a=9.8 calculation

float force(float mass);
int main()
{
    int m;
    printf("enter the value of mass in kgs \n");
    scanf("%d", &m);
    printf("the value of force in Newton is %.2f\n",force(m));
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}