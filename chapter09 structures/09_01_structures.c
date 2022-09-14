#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    int a =34;
    char b ='e';
    float d =234.234;
    struct employee e1;
    e1.salary=234.44;
    e1.code = 1;
    // e1.name="emdad"; --> wont work as char type 
    strcpy(e1.name,"emdad");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}