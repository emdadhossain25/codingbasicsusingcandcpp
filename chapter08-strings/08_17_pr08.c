#include <stdio.h>

int occurence(char st[], char c){
    char *ptr=st;
    int count =0;
    while (*ptr!='\0')
    {
       if (*ptr==c)
       {
        count=count+1;
       }
       ptr++;
       
    }
    return count;
}
int main(){
    char st[]="emdad";
    int count = occurence(st,'d');
    printf("the occurence of d is %d\n",count);
    return 0;
}