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


int find(char word[],char example[])
{
    int i=0;
    int j = 0;
    //int len = strlen(word);
    while(word[i]!='\0')
    {
         if(word[i]=example[j])
         i++;
         j++;
    }
    if(i==j)
    {
        printf("The words are same");
    }
    else
    {
        printf("The words are not the same");
    }
}