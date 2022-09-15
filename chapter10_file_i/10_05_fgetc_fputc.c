#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    fclose(ptr);

    return 0;
}