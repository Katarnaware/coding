#include <stdio.h>
#include <cs50.h>

void pattern10(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern10(n);

    return 0;
}



void pattern10(int n)
{
    for(int row=1; row<=n; row++)
    {
       for(int space=1; space<=row-1; space++)
       {
         printf(" ");
       }

       for(int col=1; col<=n-row+1; col++)
       {
            printf("*");

            printf(" ");
       }

       printf("\n");
    }
}