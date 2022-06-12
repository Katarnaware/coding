#include <stdio.h>
#include <cs50.h>

void pattern31(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern31(n);
  return 0;
}



void pattern31(int n)
{
    int i=n;

    for(int row=1; row<=n; row++)
    {

        for(int col=(i+64); col<=row+(i+63); col++)
        {
            printf("%c" , col);
        }

     i--;
     printf("\n");

    }


}
