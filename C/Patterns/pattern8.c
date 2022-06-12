#include <stdio.h>
#include <cs50.h>

void pattern8(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern8(n);

    return 0;
}



void pattern8(int n)
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
       }

       for(int colm=1; colm<=n-row; colm++)
       {
           printf("*");
       }

       printf("\n");
    }
}