#include <stdio.h>
int printline(char word[100]);
int main()
{
      char example[100];
      printf("Enter a word\n");
      scanf("%s",example);
     printline(example); 
}

int printline(char word[100])
{
    //the idea os to get the line greater than 80
   ///should take an array get the length of the word and only print if the len is more than 80
    int i = 0;
    while(word[i]!='\0' && word[i]!='\n')
    {
         ++i;
    }
    if(i>10)
    {
      printf("%s",word);
    }
    return i;
}