#include <stdio.h>
#include <cs50.h>

void pattern5(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern5(n);

    return 0;
}



void pattern5(int n)
{
    for(int row=1; row<=n; row++)
    {
       for(int space = 1; space<=n-row; space++)
       {
           printf(" ");
       }

       for(int col=1; col<=row; col++)
       {
            printf("*");
       }

       printf("\n");
    }
}