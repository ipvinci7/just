#include <stdio.h>
int duplicate(int arr[],int size);
int main()
{
      
}


int duplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;i<size;j++)
        {
            if(i==j)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
    }
    
}