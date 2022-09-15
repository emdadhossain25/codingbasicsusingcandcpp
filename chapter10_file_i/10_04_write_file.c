#include <stdio.h>

int main(){
    FILE *fptr;
    int num =45;
    fptr = fopen("generated.txt","w");
    fprintf(fptr,"the number is %d\n",num);
    fprintf(fptr,"thanks for using fprintf\n");
    fclose(fptr);
    return 0;
}