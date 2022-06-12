#include <stdio.h>
#include <cs50.h>

void pattern9(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern9(n);

    return 0;
}



void pattern9(int n)
{
    for(int row=1; row<=n; row++)
    {
       for(int space=1; space<=n-row; space++)
       {
         printf(" ");
       }

       for(int col=1; col<=row; col++)
       {
            printf("*");

            printf(" ");
       }

       printf("\n");
    }
}