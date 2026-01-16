#include <stdio.h>
int power(int x,int y);
int main()
{
  int test = power(2,3);
  printf("%d\n",test);
}

int power(int base,int n)
{
    int i,p;
    for(i=1;i<=n;++i)
    p =p*base;
    return p;
}