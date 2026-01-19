#include <stdio.h>
#include <string.h>
int wordlength(char word[100]);
int reverse(char text[100],char temp[100]);
int main()
{
  char word[100];
  char temp[100];
  printf("Enter a text\n");
  scanf("%s",word);
  reverse(word,temp);
}


int reverse(char word[100],char temp[100])
{
     int len = strlen(word);
     int i = 0 ;
     int j = 0;
     j = len-1;
     while(word[i]!='\0')
     {
        temp[i] = word[j];
        i++;
        j--;
     }
     temp[i+1] = '\0';
     printf("The reverse of the word is %s",temp);
} 
int wordlength(char word[100])
{
    int i;
    i = 0;
    while(word[i]!='\0')
    {
        i++;
    }
    return i;
}


