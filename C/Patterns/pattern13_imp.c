#include <stdio.h>
#include <cs50.h>

void pattern13(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern13(n);

    return 0;
}



void pattern13(int n)
{
    int i = 2;

    for(int last=1; last<=2*n-1; last++)
    {
    printf("*");
    }

    printf("\n");

    for(int row=1; row<=n-1; row++)
    {
        for(int space=1; space<=row; space++)
        {
            printf(" ");
        }

        for(int col=1; col<=2*n-row-i; col++)  // 2*5-1-2=7 , because there are 7 columns in first row
       {
            if(col==1 || col==2*n-row-i)
            printf("*");
            else
            printf(" ");
       }

       i++;
       j++
       printf("\n");
    }
}