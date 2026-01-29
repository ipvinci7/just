#include <stdio.h>

int main()
{
    
}

void strcat(char s[],char t[])
{
     int i,j;
     i=j=0;
     while(s[i]!='\0') //this finds the end of s
     i++;
     while((s[i++] = t[j++])!='\0'); //copies t
}