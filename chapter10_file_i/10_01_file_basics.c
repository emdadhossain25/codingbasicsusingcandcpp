#include <stdio.h>

int main(){
    FILE *ptr;

    // ptr = fopen("sample2.txt","r"); //--> for reading the file
    ptr = fopen("sample223.txt","w"); //--> for writing the file
    fclose(ptr);
    return 0;
}