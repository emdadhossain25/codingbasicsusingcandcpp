#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;
}comp;

void display(comp cnums){
    printf("the value of real part is %d\n",cnums.real);
    printf("the value of complex part is %d\n",cnums.complex);
}

int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d number\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the complex value for %d number\n",i+1);
        scanf("%d",&cnums[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
       display(cnums[i]);
    }
    
    return 0;
}