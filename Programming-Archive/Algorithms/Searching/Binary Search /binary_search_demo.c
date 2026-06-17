#include <stdio.h>
#include <stdbool.h>

void EnterTheArray(int arr[], int size)
{

  for (int i = 0; i < size; i++)
  {
    printf("Enter element %d: ", i);
    scanf("%d", &arr[i]);
  }
}
void PrintTheArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d |", arr[i]);
  }
}

void ArraySort_int(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int k = i; k < size; k++)
    {
      if (arr[i] > arr[k])
      {
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
      }
    }
  }
}

int main(void)
{

  int n = 0;
  printf("Enter the array size : ");
  scanf("%d", &n);
  int arr[n];

  EnterTheArray(arr, n);

  printf("array before :\n");
  PrintTheArray(arr, n);
  ArraySort_int(arr, n);
  printf("\narray after :\n");
  PrintTheArray(arr, n);

  int x;
  int low = 0;
  int high = n - 1;
  int mid = (low + high) / 2;
  bool stop = false;

  printf("\nsearch : ");
  scanf("%d", &x);

  while (low <= high)
  {
    mid = (low + high) / 2;

    if (arr[mid] == x)
    {
      printf("The element was found in the indxe : [%d]\n", mid);
      break;
    }
    else if (arr[mid] > x)
    {
      high = mid - 1;

      if (arr[mid] == x)
      {
        printf("The element was found in the indxe : [%d]\n", mid);
        break;
      }
    }
    else if (arr[mid] < x)
    {
      low = mid + 1;
      if (arr[mid] == x)
      {
        printf("The element was found in the indxe : [%d]\n", mid);
        break;
      }
    }
  }

  return 0;
}
