#include <stdio.h>
  enum boolean {NO,YES};
enum escapes {BELL = '\a',BACKSPACE = '\b',TAB = '\t',NEWLINE='\n',VTAB='\v',RETURN = '\r'};
int strlength(const char word[]);
int main()
{
  
    int  ox1f;
    printf("%d\n",ox1f);
    char name[] = "vinci";
    int length;
    length = strlength("vinci");
    printf("The length of the word is %d\n",length);
}


int strlength(const char word[])
{
    
    int i = 0;
    while(word[i]!='\0')
    {
        i++;
    }
    return i;
}
//enumeration constant is a list of constant integer values as in


