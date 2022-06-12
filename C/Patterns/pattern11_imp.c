#include <stdio.h>
#include <cs50.h>

void pattern11(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern11(n);

    return 0;
}



void pattern11(int n)
{
    int c;

    for(int row=1; row<=2*n; row++)
    {
        if(row>n)
        {
            c = row-n;
            for(int space=1; space<=2*n-row; space++)
            {
                printf(" ");
            }

        }

        else
        {
            c = n-row+1;
            for(int space=1; space<=row-1; space++)
            {
                printf(" ");
            }

        }




       for(int col=1; col<=c; col++)
       {
            printf("*");

            printf(" ");
       }

       printf("\n");
    }
}