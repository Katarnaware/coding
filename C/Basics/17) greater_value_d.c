#include <stdio.h>   // (how to continuously ask 3 numbers and store it in differnt variables?)
#include <cs50.h>    // Ans: we can use for loop for that
                     // This is done by nested if-else

int main (void)
{
    int num[3];

    for(int i=0; i<3; i++)
    {
        num[i] = get_int("Number %i\n" , i);
    }

    if(num[0] > num[1])
    {
        if(num[0] > num[2])
        printf("The greater number is: %i" , num[0]);
        else
        printf("The greater number is: %i" , num[2]);
    }
    else
    {
        if(num[1] > num[2])
        printf("The greater number is: %i" , num[1]);
        else
        printf("The greater number is: %i" , num[2]);

    return 0;
    }

}