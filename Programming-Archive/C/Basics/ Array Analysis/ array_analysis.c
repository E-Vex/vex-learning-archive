#include <stdio.h>

int main(void)
{ /*var*/

  int sum = 0;
  float avr = 0;
  int numberOfEvenDigits = 0;
  int numberOfOddDigits = 0;
  int greatestNumber = 0;
  int smallestNumber = 0;
  char userInput;

  int n = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  if (n <= 0)
  {
    printf("iNpUt ErRoR!!\n");
    return 1;
  }
  int arr[n];

  while (1)
  {
    if (userInput == '0')
    {
      printf("stop running the code . . .\n");
      return 1;
    }
    else if (userInput == 'h')
    {
      printf("--------------------------\n");
      printf("'1' ==> Build the array\n");
      printf("'2' ==> Array Analysis\n");
      printf("--------------------------\n");
    }
    else if (userInput == '1')
    {
      /*input*/
      for (int i = 0; i < n; i++)
      {
        printf("\nEnter element %d : ", i + 1);
        scanf("%d", &arr[i]);
      }
      greatestNumber = arr[0];
      smallestNumber = arr[0];
    }
    else if (userInput == '2')
    {

      /*cal*/
      for (int i = 0; i < n; i++)
      {
        sum += arr[i];

        if (arr[i] > greatestNumber)
        {
          greatestNumber = arr[i];
        }

        if (arr[i] < smallestNumber)
        {
          smallestNumber = arr[i];
        }
      }
      avr = (float)sum / n;
      
      /*printing*/
      printf("\n----------------------------------------------\n");
      for (int i = 0; i < n; i++)
      {
        printf("element[%d] : %d \n", i + 1, arr[i]);
      }
      printf("\n----------------------------------------------\n");

      printf("greatest number : %d\n", greatestNumber);
      printf("smalest number  : %d\n", smallestNumber);
      printf("sum             : %d\n", sum);
      printf("average         : %f\n", avr);

      printf("array length    : %d\n", n);

      /*even|odd*/
      printf("\neven/odd in the array ==>\n");
      printf("the even numbers in  the array: \n");
      for (int i = 0; i < n; i++)
      {
        if (arr[i] % 2 == 0)
        {
          printf("=>%d\n", arr[i]);
          numberOfEvenDigits++;
        }
      }

      printf("The number of even digits: %d\n", numberOfEvenDigits);

      printf("----------------------\n");

      printf("the odd numbers in  the array: \n");
      for (int i = 0; i < n; i++)
      {
        if (arr[i] % 2 != 0)
        {
          printf("=>%d\n", arr[i]);
          numberOfOddDigits++;
        }
      }
      printf("The number of odd digits: %d\n", numberOfOddDigits);
    }
  }

  return 0;
}
