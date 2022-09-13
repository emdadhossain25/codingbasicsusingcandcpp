#include<stdio.h>
#include<string.h>
int main()
{

    char *s1 = "hello";
    char *s2 = "harry";
    int val = strcmp(s1, s2);
    printf("now the val is: %d\n", val);
    return 0;
}