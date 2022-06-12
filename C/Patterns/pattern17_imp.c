#include <stdio.h>
#include <cs50.h>

void pattern16(int);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern16(n);
    return 0;
}



void pattern16(int n)
{
    int c, i=n;

    for(int row=0; row<2*n; row++)   // used zero because it helped to print spaces in between
    {
        if(row>=n) // its '>=' because the row is from 0
        {
            c = (row-n)+1;
            for(int col=0; col<c; col++)
                printf("*");

            for(int space=1; space<=2*i-2; space++)   // here by decreasing 'n' we can print accurate spaces, but n is an input , therefore, store it in temporary variable
                printf(" ");

            for(int col=0; col<c; col++)
                printf("*");

            i--;
        }

        else
        {   c = n-row;
            for(int col=0; col<c; col++)
                printf("*");

            for(int space=0; space<row*2; space++)
                printf(" ");

            for(int col=0; col<c; col++)
                printf("*");
        }

        printf("\n");
    }

    }
