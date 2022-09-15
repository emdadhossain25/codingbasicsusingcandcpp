#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you loose, 0 if draw;
    // cases
    // ss-
    // sw-
    // sg-
    // gg-
    // gs-
    // gw-
    // ww-
    // ws-
    // wg-
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("comp was %c\n",comp);
    if (result == 0)
    {
        printf("draw\n");
    }
    else if (result == 1)
    {
        printf("you win\n");
    }
    else
    {
        printf("you loose\n");
    }

    return 0;
}