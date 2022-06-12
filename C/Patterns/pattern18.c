#include <stdio.h>
#include <cs50.h>

void pattern18(int);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern18(n);
    return 0;
}



void pattern18(int n)
{
    int c, i=n;

    for(int row=1; row<=2*n-1; row++)
    {
        if(row>n)
        {
            c = 2*n-row;
            for(int col=0; col<c; col++)
                printf("*");

            for(int space=1; space<=row-c; space++)
                printf(" ");

            for(int col=0; col<c; col++)
                printf("*");

            i--;
        }

        else
        {   c = row;
            for(int col=1; col<=c; col++)
                printf("*");

            for(int space=1; space<=2*i-2; space++)
                printf(" ");

            for(int col=1; col<=c; col++)
                printf("*");

            i--;
        }

        printf("\n");
    }

    }
