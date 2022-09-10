#include <stdio.h>

int main()
{
    float num;
    int physics, chemistry, maths;

    printf("enter physics marks\n");
    scanf("%d", &physics);
     
    printf("enter chemistry marks\n");
    scanf("%d", &chemistry);
    
    printf("enter maths marks\n");
    scanf("%d", &maths);

    num=(physics+maths+chemistry)/3;

    if((num<40)||physics<33 || chemistry<33 || maths<33){
        printf("Your total percentage is %f and you are failed.\n",num);
    }else
    {
        printf("Your total percentage is %f and you are pased.\n",num);
        
    }
    
    return 0;
}