#include<stdio.h>
#include <string.h>
int find(char word[],char example[]);
int main()
{
   char name[10] ="vinci";
   char name1[10] = "vincii";
   find(name,name1);
   printf("%s\n",name);
}

int find(char word[], char example[])
{
    int i = 0;
    int j = 0;
    int match = 0;
    
    while(word[i] != '\0')
    {
        // If characters match, continue checking
        if(word[i] == example[j])
        {
            i++;
            j++;
            
            // If we reached the end of example, found a match!
            if(example[j] == '\0')
            {
                return 1;  // Found it!
            }
        }
        else
        {
            // Characters don't match - reset and move to next position in word
            i = i - j + 1;  // Move to next starting position
            j = 0;           // Reset example pointer
        }
    }
    
    return 0;  // Not found
}