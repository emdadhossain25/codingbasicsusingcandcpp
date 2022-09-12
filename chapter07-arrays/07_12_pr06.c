#include <stdio.h>

int main()
{
    int number_of_positive_integers = 0;
    int a[] = {-2, 3, 0, -1, 3};

    for (int i = 0; i < 5; i++)
    {
        if (a[i]<0)
        {
            number_of_positive_integers++;
        }
        
    }

    printf("number of positive integers count is: %d\n",number_of_positive_integers);
    
    return 0;
}