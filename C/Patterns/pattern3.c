#include <stdio.h>
#include <cs50.h>

void pattern3(int);

int main(void)
{
    int n = get_int("How many lines?\n");

    printf("");

    pattern3(n);

    return 0;
}



void pattern3(int n)
{
   for(int row=1; row<=n; row++)
   {
       for(int col=1; col<=row; col++)
       {
         printf("%i" , col);
       }

       printf("\n");
   }
}