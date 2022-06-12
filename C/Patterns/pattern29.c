#include <stdio.h>
#include <cs50.h>

void pattern29(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern29(n);
  return 0;
}



void pattern29(int n)
{
    for(int row=1; row<=n; row++)
    {
        int i=row;

        for(int space=1; space<=2*(n-row); space++)
            printf(" ");

        for(int col=1; col<=row; col++)
        {
            printf("%i" , i);
            i--;
            printf(" ");
        }


        for(int col=2; col<=row; col++)
        {
            printf("%i" , col);
            printf(" ");
        }

    printf("\n");
    }
}