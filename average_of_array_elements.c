#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE]; 
    int sum = 0; 
    int average; 
    int i; 
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    average = sum / SIZE;
    printf("The average of the array elements is %d\n", average);

    return 0;
}
