#include <stdio.h>
#include <string.h>
int removal(char word[100],char temp[100]);


int main()
{
    char word[100];
    char temp[100];
    printf("Enter a sample program with blanks and tabs\n");
    fgets(word,sizeof(word),stdin);
    printf("This program removes blanks and tabs");
    removal(word,temp);
}


int removal(char word[100], char temp[100])
{
    int len = strlen(word);
    int i = 0;
    int j = 0;  // Separate index for temp array

    while(word[i] != '\0')
    {   
        // Copy only if it's NOT a space and NOT a tab
        if(word[i] != ' ' && word[i] != '\t')
        {
            temp[j] = word[i];
            j++;
        }
        i++;
    }
    
    // Null-terminate the result string
    temp[j] = '\0';
    
    printf("The word without spaces and tabs is %s\n", temp);
    
    // Return the length of the new string
    return j;
}

