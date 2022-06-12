// How many decimals we want after floeat, we'll learn that in this code

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float a = get_float("Enter 1st Number: \n");
    float b = get_float("Enter 2nd Number : \n");

    printf("Result: %.5f\n" , a/b);   // here 0.5 is upto 5 decimals
    return 0;
}