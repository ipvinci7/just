#include <stdio.h>

#define MAXLINE 100

int main()
{
    double sum,atof(char c[]);
    char line[MAXLINE];
    int getline(char line[],int max);
    sum = 0;
    while(getline(line,MAXLINE)>0)
    printf("\t%g\n",sum+=atof(line));
}