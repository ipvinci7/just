#include <stdio.h>
void squeeze( char word[],int c);
int main()
{

}

void squeeze( char s[],int c)
{
    int j=0; int i;
     for(int i=0;s[i]!='\0';i++)
     {
        if(s[i]!=c)
        {
            s[j++]=s[i];
        }
     }
   s[j] ='\0';
   if(s[i]!=c)
   {

   }
     
}