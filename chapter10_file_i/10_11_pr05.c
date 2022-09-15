#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("double.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr = fopen("double.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    return 0;
}