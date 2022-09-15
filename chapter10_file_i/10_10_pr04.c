// take name and salary of two employees as input from user and write them to a text file in
// the following format name1,3300
// name2, 7100

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[20];
    float salary;
} emp;

int main()
{
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    emp e1, e2;
    printf("enter name and salary for e1\n");
    scanf("%s",e1.name);
    scanf("%f",&e1.salary);

    printf("enter name and salary for e2\n");
    scanf("%s",e2.name);
    scanf("%f",&e2.salary);


    fprintf(ptr,"%s,%.0f",e1.name,e1.salary);
    fprintf(ptr,"\n");
    fprintf(ptr,"%s,%.0f",e2.name,e2.salary);
    fclose(ptr);
    return 0;
}