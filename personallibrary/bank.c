#include <stdio.h>
//should be able to open an account
struct Account
{
    char firstname[100];
    char lastname[100];
    char emailaddress[50];
    char acntno[50];
    float bal;
};
struct Account openacnt(char firstname[],char lastname[],char email[])
{
    
    struct Account a1 = {firstname,lastname,email,"test",0.0};
    return a1;
}
int main()
{
   struct Account a2 = openacnt("Vinci","Kuti","kutivinci@gmail.com");
   printf("This is the name of the owner of the account %s",a2.firstname);
}