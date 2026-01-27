#include <stdio.h>


int main()
{

}

int lower(int c)
{
    if(c >='A' && c <= 'Z')
    return c + 'a' - 'A';
    else
    return c;
}