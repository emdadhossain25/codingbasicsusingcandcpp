// use a library function to calculate the area of a square (side is a);
#include <stdio.h>
#include <math.h>

int main(){
    int a,area;
    printf("enter side of square\n");
    scanf("%d",&a);
    area=pow(a,2);
    printf("area of the square is %d\n",area);
    return 0;
}