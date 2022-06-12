#include <stdio.h>
#include <cs50.h>

void pattern7(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern7(n);

    return 0;
}



void pattern7(int n)
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
       }

       for(int colm=1; colm<=row-1; colm++)
       {
           printf("*");
       }

       printf("\n");
    }
}