#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, n_guesses = 1,guess;
    srand(time(0));         // initializitation for time
    num = rand() % 100 + 1; // generate random number between 1 t0 100
    printf("the number is %d\n", num);
    // keep running the loop untill the number is guessed
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("lower number please\n");
        }
        else if (guess < num)
        {

            printf("higher number please\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n", n_guesses);
        }
        n_guesses += 1;

    } while (guess!=num);

    return 0;
}