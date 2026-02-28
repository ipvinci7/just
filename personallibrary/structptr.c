#include <stdio.h>
#include <string.h>
struct Car
{
    char brand[30];
    int year;
};
struct Student
{
    char name[70];
    char class;
    int age;
};
int main()
{
    struct Car car = {"Toyota",2002};
    // declare a pointer to the car
    struct Car *ptr = &car;

    //ACCESSING THE MEMBERS OF VARIABLE 
    printf("Brand: %s\n",ptr->brand);
    printf("Year:%d\n",ptr->year);

    struct Student s1;
    s1.age = 28;
    strcpy(s1.name,"Vinci");
    struct Student *s1ptr = &s1;
    printf("The students age %d\n",s1ptr->age);
    printf("The students name is %s\n",s1ptr->name);
}