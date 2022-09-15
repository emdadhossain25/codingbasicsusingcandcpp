//write a program to read 3 integers from a file
#include <stdio.h>

int main(){
    FILE *ptr;
    int num,num2,num3;
    ptr =fopen("demotext.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);
    printf("%d, %d, %d\n",num,num2,num3);

    return 0;
}