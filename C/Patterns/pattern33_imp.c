#include <stdio.h>
#include <cs50.h>

void pattern33(int);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern33(n);
    return 0;
}


void pattern33(int n)
{
    int i=n;

    for(int row=1; row<=n; row++)
    {
        for(int col=(i+64); col>=(i+65)-(n-row+1); col--)
        {
            printf("%c" , col);
        }


        i--;
        printf("\n");
    }
}