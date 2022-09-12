#include <stdio.h>

// void printArray(int *ptr,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of element %d is %d\n",i+1,*(ptr+i));
//         //*(ptr+1) is simple dereferencing
//     }

// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 5555; // this value will be changed in arr array of main as well.
}
int main()
{
    int arr[] = {1, 122, 3, 4, 5, 6, 7};
    printArray(arr, 7);
    printf("%d\n", arr[2]);
    return 0;
}