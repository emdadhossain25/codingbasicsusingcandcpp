
/**
 * for int memory allocatoin 4 bytes
 * for char memory allocation is 1 bytes
 * for float memory allocation is 4 bytes
 */
#include <stdio.h>

int main(){
    char c =34;
    char *ptr=&c; // address of c is stored in ptr pointer;

    
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    // ptr--; // decreased to 4 bytes as in this architecture int is of 4 bytes;
    // ptr++;
    // ptr++;
    printf("the value of ptr is %u\n",ptr);


    int a =34;
    int *ptr=&a; // address of a is stored in ptr pointer;

    
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    // ptr--; // decreased to 4 bytes as in this architecture int is of 4 bytes;
    // ptr++;
    // ptr++;
    printf("the value of ptr is %u\n",ptr);
   


    float c =34.0;
    float *ptr=&c; // address of c is stored in ptr pointer;

    
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    // ptr--; // decreased to 4 bytes as in this architecture int is of 4 bytes;
    // ptr++;
    // ptr++;
    printf("the value of ptr is %u\n",ptr);
    return 0;
}

