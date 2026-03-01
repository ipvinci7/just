#include <stdio.h>
#include <string.h>

struct Student
{
     char firstname[50];
     char lastname[30];
     int age;
     char class;
};

int main()
{
    // struct Student s1;
    struct Student s1 = {"vinci","Kuti",28,'A'};
    struct Student *s1ptr = &s1;
     printf("The Student is in %c\n class  ",s1ptr->class);
    printf("%d\n",s1ptr->age);
}