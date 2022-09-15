#include <stdio.h>

int main()
{
    FILE *ptr, *ptrc;
    ptr = fopen("getcdemo.txt", "r");
    char c = fgetc(ptr);
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    fclose(ptr);
    ptrc = fopen("putcdemo.txt", "w");
    putc('c', ptrc);
    putc('v', ptrc);
    fclose(ptrc);

    return 0;
}