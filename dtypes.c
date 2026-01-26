#include <stdio.h>

int main()
{
    int  ox1f;
    printf("%d\n",ox1f);
}


int strlength(char word[])
{
    int i = 0;
    while(word[0]!='\0')
    {
        i++;
    }
    return i;
}