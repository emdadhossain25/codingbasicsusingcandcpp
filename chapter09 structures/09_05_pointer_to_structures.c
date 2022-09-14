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
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code=101; --> or you can write
    ptr->code = 101;
    strcpy(e1.name, "emdad");
    (*ptr).salary = 101.23;
    printf("code is %d\n", e1.code);
    printf("name is %s\n", (*ptr).name);
    printf("salary is %.2f\n", (*ptr).salary);
    printf("salary is %.2f\n", e1.salary);
    return 0;
}