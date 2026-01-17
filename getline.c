#include <stdio.h>


int getword(char sample[100]);
int main()
{
    char test[100];
    getword(test);
    printf("%s",test);
}

int getword(char sample[100])
{
    int c,i;
    i=0;
    while((c=getchar())!=EOF)
    {
        if(c!='\n')
        {
            sample[i] = c;
            i++;
        }
        else
        {
             sample[i] =c;
             i++;
             sample[i] = '\0';
        }
    }
    return i;
}
int copy(char from[],char to[])
{
    int i = 0;
    while(from[i]!='\0')
    {
          to[i] = from[i];
          i++;
    }
    to[i] = '\0';
    return i;
}