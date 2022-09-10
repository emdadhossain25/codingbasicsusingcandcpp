#include <stdio.h>

int main(){
    // 97-122=a-z
    char c;
    printf("Enter the character\n");
    scanf("%c",&c);
    if(c<=122 && c>=97){
        printf("%c is lower case\n",c);
    }else{
        printf("%c is not lower case\n",c);
    }
    return 0;
}