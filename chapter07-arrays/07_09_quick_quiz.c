#include <stdio.h>

void display( int row, int col,int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}

int main()
{
    int row, col;
    printf("enter row and colums for the 2d array\n");
    scanf("%d", &row);
    scanf("%d", &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("enter %d,%d elemnent\n", i + 1, j + 1);
            scanf("%d",&arr[i][j] );
        }
    }
    display( row, col,arr);
    return 0;
}
