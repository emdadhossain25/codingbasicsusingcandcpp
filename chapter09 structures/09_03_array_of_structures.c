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
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "emdad");

    facebook[1].code = 103;
    facebook[1].salary = 130.45;
    strcpy(facebook[1].name, "hossain");

    facebook[2].code = 123;
    facebook[2].salary = 110.45;
    strcpy(facebook[2].name, "ali");

    printf("value of facebook[0] name:%s, code:%d,salary:%.2f\n",
           facebook[2].name,
           facebook[1].code,
           facebook[0].salary);
    return 0;
}