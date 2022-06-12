// we are finding the sum of natural numbers why using for loop

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, sum=0;

    do
    {
        n = get_int("Enter the Number above 1: \n");
    }while(n<=0);

     for (int i=0; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of the natural numbers is: %i\n" , sum);
    return 0;
}