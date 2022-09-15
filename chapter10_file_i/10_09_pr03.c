// write a program to read a character from a file and write twice its content into a file;

#include <stdio.h>

int main()
{
    FILE *ptr, *ptw;
    char c;
    ptw = fopen("writeintotwice.txt", "w");
    int count =0;
    while (count < 2)
    {

        ptr = fopen("readfrom.txt", "r");
        c = fgetc(ptr);

        while (c != EOF)
        {

            fputc(c, ptw);
            c = fgetc(ptr);
        }
        fputc('\n', ptw);

        fclose(ptr);
        count++;
    }

    fclose(ptw);
    return 0;
}