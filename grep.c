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

int grepped(char word[], char find[])
{
    int i, j, k;
    int wordlen = strlen(word);
    int findlen = strlen(find);
    
    // If find is longer than word, it can't be a substring
    if (findlen > wordlen)
        return -1;
    
    // Check for substring starting at each position in word
    for (i = 0; i <= wordlen - findlen; i++) {
        // Check if find matches starting at position i
        for (j = 0, k = i; j < findlen; j++, k++) {
            if (word[k] != find[j])
                break;
        }
        // If we matched all characters of find
        if (j == findlen)
            return i;  // Return starting position
    }
    
    return -1;  // Not found
}