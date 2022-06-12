#include <stdio.h>
#include <cs50.h>

void pattern27(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern27(n);

    return 0;
}



void pattern27(int n)
{
    int c, i=n;

    for(int row=1; row<=2*n-1; row++)
    {
        if(row>n)
        {
            c=2*n-row;
            for(int space=1; space<=row-n; space++)
            printf(" ");
            i--;
        }

        else
        {
            c=row;
            for(int space=1; space<=n-row; space++)
            printf(" ");
        }


        for(int col=1; col<=c; col++)
        {
            printf("*");
            printf(" ");
        }

        printf("\n");
    }

}


