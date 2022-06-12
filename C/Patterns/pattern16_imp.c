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
    int c;
    for(int row=1; row<=2*n-1; row++)
    {
       if(row>n)
       {
            c = 2*n-row;    // half triangle
            for(int space=1; space<=row-n; space++)
            printf(" ");
       }
       else
        {
            c = row;  // half triangle
            for(int space=1; space<=n-row; space++)
            printf(" ");
        }


       for(int col=1; col<=c; col++)
        {
            printf("%i" , (c-col)+1);

        }

       for(int col=2; col<=c; col++)     // thod for loop prints another half of the triangle
        {
            printf("%i" , col);
        }

      printf("\n");
    }

    }
