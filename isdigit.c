#include <stdio.h>
int isdig(int num);
int main()
{
    int result;
   result = isdig(7);
   printf("%d is digit or not ",result);
}

int isdig(int num)
{
    if(num >='0' && num <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}