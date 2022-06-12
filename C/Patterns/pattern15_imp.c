// since palcal triangle is like nCr where n=rows , r=cols, but it will print pascal triangle only if we strat n &r with '0'

//  0C0
//1C0  1C1
//2C0 2C1  2C2

#include <stdio.h>
#include <cs50.h>


long factorial(int);
void pattern15(int);

int main(void)
{
    int n = get_int("size?\n");
    printf("\n");

    pattern15(n);
    return 0;
}




long factorial(int n)
{
    long temp = 1;
    while(n>0)
    {  temp = n*temp;
        n--;
    }

    return temp;
}



void pattern15(int n)
{
    for(int row=0; row<n; row++)
    {
        for
        (int space=0; space<n-row; space++)
        printf(" ");

        for(int col=0; col<=row; col++)
        {
            long c = factorial(row)/(factorial(col)*factorial(row-col));
            printf("%li" , c);
            printf(" ");
        }

    printf("\n");
    }
}











