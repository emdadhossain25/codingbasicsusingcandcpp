#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr =fopen("writemultiplication.txt","w");
    printf("enter number for multiplaction table\n");
    scanf("%d",&num);
    for (int i = 0; i <10; i++)
    {
        fprintf(ptr,"%dx%d=%d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    
    return 0;
}