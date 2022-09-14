#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e1){

    printf("the code is %d\n",e1.code);
    printf("the name is %s\n",e1.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 103;
    strcpy(ptr->name,"emdad");
    show(e1);
    return 0;
}