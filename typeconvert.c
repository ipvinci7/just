#include <stdio.h>
/* atoi: convert s to integer */
int atoi(char s[])
{
    int i,n;
    for(i=0;s[i]>='0' && s[i]<='9';++i)
    n = n+(s[i]-'0');
    return n;
}
int main()
{
   char name[] = "kuti";
   int num = atoi(name);
   printf("%d\n",num);
}

