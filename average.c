#include <stdio.h>
int average(int arr[],int size);
int main()
{
   int size;
   int numbers[10];
   size = 10;
   int sum;
   printf("Enter the elements of the array\n");
   for(int i=0;i<size;i++)
   {
       scanf("%d\n",&numbers[i]);
   }
   sum = average(numbers,size);
   printf("The sum of the numbers is %d\n",sum);
}

int average(int arr[],int size)
{
     int sum = 0;
     double avg;
     for(int i=0;i<size;i++)
     {
          sum += arr[i];
     }
     avg = sum%size;
     return avg;
}