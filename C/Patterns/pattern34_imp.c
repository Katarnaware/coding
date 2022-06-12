#include <stdio.h>
#include <cs50.h>

void pattern34(int);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern34(n);
    return 0;
}


void pattern34(int n)
{

    for(int row=1; row<=n; row++)
    {
        int i=row;

        for(int col=1; col<=row; col++)
        {
            printf("%i" , col);
        }


        for(int space=1; space<=2*(n-row); space++)
            printf(" ");

        for(int col=1; col<=row; col++)
        {
            printf("%i" , i);
            i--;
        }



        printf("\n");
    }
}