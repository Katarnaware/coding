#include <stdio.h>
#include <cs50.h>

void pattern1(int);

int main(void)
{
    int n = get_int("How many lines?\n");

    pattern1(n);

    return 0;
}



void pattern1(int n)
{
   for(int row=1; row<=n; row++)
   {
       for(int col=1; col<=row; col++)
       {
          printf("*");
       }

       printf("\n");
   }
}