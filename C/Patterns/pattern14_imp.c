#include <stdio.h>
#include <cs50.h>

void pattern14(int);

int main(void)
{

    printf("\n");
    int n = get_int("Size?\n");
    pattern14(n);

    return 0;

}




void pattern14(int n)
{
    int c, i=1, j=2;

    for(int row=1; row<=(2*n-1); row++)
    {
        if(row>n)
        {
            c = 2*n-i-j;
            i++;
            j++;

            for(int space=1; space<=row-n; space++)
            printf(" ");
        }
        else
        {
            c = 2*row - 1;
            for(int space=1; space<=n-row; space++)
            printf(" ");

        }


        for(int col=1; col<=c; col++)
        {
            if(col==1 || col==c)
            printf("*");
            else
            printf(" ");
        }


    printf("\n");

    }
}