#include <stdio.h>
#include <string.h>

struct Student
{
     char firstname[50];
     char lastname[30];
     int age;
     char class;
};
int add(int a,int b)
{
    return a+b;
}

int main()
{
    // struct Student s1;
    struct Student s1 = {"vinci","Kuti",28,'A'};
    struct Student *s1ptr = &s1;
     printf("The Student is in %c\n class  ",s1ptr->class);
    printf("%d\n",s1ptr->age);
    //Declare a function pointer that matches
    //the signature of add() function
    int (*fptr)(int, int);
    //Assign address of add()
    fptr = &add;
    //Call the function via ptr
    printf("%d",fptr(10,5));
    return 0;
}