#include<stdio.h>

int main()
{
    int c,nl;
    nl = 0;
    while((c=getchar())!=EOF)
    {
         if(c=='\n')
         {
            nl++;
         }
    }
    printf("The length of words is %d\n",nl);
    return 0;
}