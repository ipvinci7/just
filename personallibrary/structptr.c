#include <stdio.h>

struct Car
{
    char brand[30];
    int year;
};
int main()
{
    struct Car car = {"Toyota",2002};
    // declare a pointer to the car
    struct Car *ptr = &car;

    //ACCESSING THE MEMBERS OF VARIABLE 
    printf("Brand: %s\n",ptr->brand);
    printf("Year:%d\n",ptr->year);
}