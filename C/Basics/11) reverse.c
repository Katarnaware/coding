#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter the number: \n");

    printf("Reversed numbers are: ");
    while(n!=0)
    {
        int r = n%10;
        printf("%i" ,r);
        n = n/10;
    }

    printf("\n");
}