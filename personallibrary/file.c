#include <stdio.h>
#include <string.h>
int main()
{
    //File pointer to store the 
    //value returned by fopen
    FILE* fptr;
    
    //Opening the file in read mode
    fptr = fopen("filename.txt","w");

    //checking if the file
    //opened successfully
    if(fptr==NULL)
    {
         printf("The file is not opened.");
    }

    //write to the file
    char word[500];
    printf("Enter the word you want to write to the file\n");
    fgets(word,sizeof(word),stdin);
    fputs(word,fptr);
    fputs("\n",fptr);
    fclose(fptr);
    return 0;
}


