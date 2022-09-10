#include <stdio.h>

int main(){
    int rating;
    printf("enter your rating from 1-5\n");
    scanf("%d",&rating);
    

    switch (rating)
    {
    case 5:
        printf("rating is very good\n");
        break;
    
    default:
        printf("rating is average\n");
        break;
    }
    return 0;
}