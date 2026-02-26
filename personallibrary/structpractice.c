#include <stdio.h>

struct car 
{
     char name[30];
     int price;
};
void print_car_info(struct car c)
{
     printf("Name : %s",c.name);
     printf("\n Price : %d\n",c.price);
}
struct student
{
      char name[50];
      int age;
};
struct student getInformation()
{
     struct student s1;
     printf("Enter name:");
     scanf("%[^\n]%*c",s1.name);
     printf("Enter age:");
     scanf("%d",&s1.age);
     return s1;
}
void display(struct student s);
int main()
{
   struct student s1;
   printf("Enter name: ");
   scanf("%[^\n]%*c",s1.name);
   struct car c = {"Tata",1021};
   print_car_info(c);
   return 0;
}


//passing struct as an argument the whole thing is going to be copied 
//1.pass the whole thing 
//2. By passing the entire structure to the function