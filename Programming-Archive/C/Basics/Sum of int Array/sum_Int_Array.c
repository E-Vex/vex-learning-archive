#include <stdio.h>

int sum(int *arr, int *size)
{
    int sum = 0;
    for (int i = 0; i < *size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{

    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sum(arr, &n);
    printf("The sum of the array is: %d\n", result);
    return 0;
}