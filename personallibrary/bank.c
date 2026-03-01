#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
//should be able to open an account
int saveacnt(char acnname[]);
struct Account
{
    char firstname[100];
    char lastname[100];
    char emailaddress[50];
    char acntno[50];
    float bal;
    int id;
};
// struct Student
// {
//     int id;
//     float grade;
// };
// struct Student createStudent(int id_val,float grade_val);
// struct Student createStudent(int id_val,float grade_val)
// {
//     struct Student s;
//     s.id = id_val;
//     s.grade=grade_val;
//     return s;
// }
struct Account createacnt(char firstname[],char lastname[],char email[])
{
   
    
    struct Account a1;
    
    strcpy(a1.firstname,firstname);
    strcpy(a1.lastname,lastname);
    strcpy(a1.emailaddress,email);
    srand(time(NULL));
    int acntnum = rand();
    char acntnumc[50];
    
    snprintf(acntnumc,sizeof(acntnumc),"%d",acntnum);
    strcpy(a1.acntno,acntnumc);
    a1.bal = 0.0;
    return a1;
}
int main()
{
   struct Account a2 = createacnt("Vinci","Kuti","kutivinci@gmail.com");
   printf("This is the name of the owner of the account %s",a2.firstname);
   printf("The last name is %s\n",a2.lastname);
   printf("The email address is  %s\n",a2.emailaddress);
   printf("The account number is %s\n",a2.acntno);
   printf("The balance is %f\n",a2.bal);
   saveacnt(a2.firstname);

}
//look for the account if it exist 

int saveacnt(char acntname[])
{
    FILE *filepointer; // Declare a file pointer
    //open a file name
    filepointer = fopen("bank.txt","w");

    //error checker check if the file is open
    if(filepointer == NULL)
{
    printf("Error opening file!\n");
    return -1; // Return error code
}
     if(filepointer!=NULL)
     {
        fprintf(filepointer,"Bank Account name %s",acntname);
         fclose(filepointer);
     }
     //Write content to the file
    return 0;
}