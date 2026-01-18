#include <stdio.h>

int wordlength(char word[100]);
int reverse(char text[100]);
int main()
{
  char word[100];
  printf("Enter a text\n");
  scanf("%s",word);
  reverse(word);
}


int reverse(char text[100])
{
    int length;
     int i = 0;    
    length = wordlength(text);
    char temp[length+1];
    for(int j = length;j<0;j--)
    {
        for( i = 0;i<length;i++)
        {
             temp[i] = text[j];
        }
    }
   temp[i+1] = '\0';
    printf("%s",temp);
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


