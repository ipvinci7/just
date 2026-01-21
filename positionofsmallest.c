#include <stdio.h>
int smallest(int array[],int size);
int main()
{
    int size;
    int small;
    printf("Enter size of the array\n");
    scanf("%d\n",&size);
    int arr[size];
   printf("Enter the elements of the array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&i);
    }
    small= smallest(arr,size);
    printf("This is the smallest %d",small);

}

int smallest(int array[],int size)
{
     int smallest = array[0];
     for(int i=0;i<size;i++)
     {
         if(array[i]<smallest)
         {
            smallest = array[i];
         }
     }
     return smallest;
}