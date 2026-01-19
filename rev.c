#include <stdio.h>
#include <string.h>
int reverse(char sample[100]);

int main()
{
    char word[100];
    char reversed[100];
    int len;
    printf("Enter a word\n");
    scanf("%s",word);
    printf("Here is the word you entered\n %s\n",word);
    len = strlen(word);
    printf("Here is the length of the word you entered %d\n",len);
     reverse(word);
}


int reverse(char sample[100])
{
     char temp[100];
     int j = 0;
     int len = strlen(sample);
     for(int i = len ;i>=0;i--)
     {
        printf("%c",sample[i]);
     }
     
}

int append(char word[100],char s,int length)
{
   int i = 0;
   while(i<length-1)
   {
        word[i] = s;
        i++;
   }
    word[length] ='\0';
}