#include <stdio.h>
int even(int num);
int odd(int num);
int main()
{

}

int even(int num)
{
    if(num%2==0)
    {
        return  1;
    }
    else
    {
        return 0;
    }

}
int odd(int num)
{
    if(num%2!=0)
    {
        return 1;
    }
    else{
        return 0;
    }
}