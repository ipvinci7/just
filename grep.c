#include <stdio.h>
#include <string.h>


int main()
{

}


int grepped(char word[],char find[])
{
    int i = 0;
    int j=0;
    //the idea is to circle the the word andn
    int worldlen = strlen(word);
    int findlen = strlen(find);
    if(worldlen==findlen)
    {
       while(word[i]!='\0')
   {
      if(word[i]==find[j])
      {
          i++;
          j++;
      }
    
   }
    }
   if(j==i)
   return find;
   else 
   return -1;
}