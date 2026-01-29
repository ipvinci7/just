#include <stdio.h>

int main()
{

}

void squeeze(char s[],char t[])
{
   
    //this should look for duplicate and delete it
    int i,j;
    i=0,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        int found = 0;
         for(j=0;t[j]!='\0';j++)
         {
            if(s[i]!=t[j])
            {
                
            }
         }
         if(!found)
         {
              s[j++] = s[i];
         }
    }
    

}