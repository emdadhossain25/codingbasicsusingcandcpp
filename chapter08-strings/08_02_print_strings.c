#include <stdio.h>

int main()
{
    char str[] = "EMDAD";
    char *ptr = str;
    // pointer increment done using pointer arithmatic and checks the last char for string in c
    // which is '\0' null character
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}