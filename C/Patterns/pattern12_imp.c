#include <stdio.h>
#include <cs50.h>

void pattern12(int);

int main(void)
{
    int n = get_int("Size?\n");

    printf(" \n");

    pattern12(n);

    return 0;
}



void pattern12(int n)
{

    for(int row=1; row<=n-1; row++)
    {

     for(int space=1; space<=n-row; space++)
     {
         printf(" ");
     }


     for(int col=1; col<=2*row-1; col++)
       {
            if(col==1 || col==2*row-1)
            printf("*");
            else
            printf(" ");
       }

       printf("\n");
       printf("\n");
    }

    for(int last=1; last<=2*n-1; last++)
    {
        printf("*");
    }

    printf("\n");

}