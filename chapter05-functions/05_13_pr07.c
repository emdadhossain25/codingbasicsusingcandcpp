/**
 * write a program using recursion to print n lines with n * in each line.
 */

#include <stdio.h>

int lines(int n,int i); // prototype
void printLines(int n);// prototype

int main()
{
    int n;
    int i=1;
    printf("enter number of lines to print\n");
    scanf("%d", &n);
    lines(n,i);
    return 0;
}

int lines(int n,int i)

{

    if (i>n)
    {
        return 0; // base condition for exiting the recursion
    }
    else
    {
        printLines(i); // printing stars using tabs.
        printf("\n"); // inserting new line.
        lines(n,i+1); //recursive call to lines incrementing the value for i.
    }
}

void printLines(int n){
    while (n)
    {
        printf("*\t");
        n--;
    }
    
}