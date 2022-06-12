#include <stdio.h>
#include <cs50.h>

void pattern2(int);

int main(void)
{
    int n = get_int("How many lines?\n");

    pattern2(n);

    return 0;
}



void pattern2(int n)
{
   for(int row=1; row<=n; row++)
   {
       for(int col=1; col<=n-row+1; col++)
       {
           printf("*");
       }

       printf("\n");
   }
}