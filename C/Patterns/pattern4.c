#include <stdio.h>
#include <cs50.h>

void pattern4(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern4(n);

    return 0;
}



void pattern4(int n)
{
    for(int row=1; row<=2*n-1; row++)
    {
        int c;
        if(row>n)
        c = 2*n-row;    //n-(row-n)  where row-n specify spaces
        
        else
        c = row;

       for(int col=1; col<=c; col++)
       {
            printf("*");
       }

       printf("\n");
    }
}