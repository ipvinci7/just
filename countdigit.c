#include <stdio.h>

int main()
{
  int c, i,nwhite,nother;
  int ndigit[10];
  nwhite = nother = 0;
  for(i=0;i<10;++i)
  ndigit[i] = 0;
  while((c=getchar()!=EOF))
  if(c>='0' && c <='9')
  ++ndigit[c-'0'];
  
}


int getline(char word[100],int lim)
{
   int c,i;
   for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    word[i] = c;
    if(c=='\n')
    {
       word[i] = c;
       ++i;
    }
    word[i] = '\0';
    return i;
}

void copy(char from[100],char to[100])
{
  int i = 0;
  while(from[i]!='\0')
  {
     to[i] = from[i];
     i++;
  }
  from[i] = '\0';
}