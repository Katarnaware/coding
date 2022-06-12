#include <stdio.h>
#include <cs50.h>

void pattern19(int);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern19(n);
    return 0;
}



void pattern19(int n)
{
    for(int row=1; row<=n; row++)
    {
        if(row==1 || row==n)
        {
            for(int col=1; col<=n-1; col++)
                printf("*");
        }

        else
        {
            for(int col=1; col<=n-1;col++)
            {
                if(col==1 || col==n-1)
                    printf("*");
                else
                    printf(" ");
            }
        }


        printf("\n");
    }
}