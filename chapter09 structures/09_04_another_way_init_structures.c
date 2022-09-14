#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee harry={100,100.45,"emdad"};
    printf("name is %s\n",harry.name);
    printf("code is %d\n",harry.code);
    printf("salary is %.2f\n",harry.salary);

    return 0;
}