#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;



void show(emp e1){

    printf("the code is %d\n",e1.code);
    printf("the salary is %.2f\n",e1.salary);
    printf("the name is %s\n",e1.name);
}


int main()
{
    //declaring e1 and ptr
    emp e1;
    emp *ptr;

    //pointing ptr to e1;
    ptr = &e1;

    //set the member values for e1;
    ptr->code = 103;
    ptr->salary = 11.03;
    strcpy(ptr->name,"emdad");
    show(e1);
    return 0;
}