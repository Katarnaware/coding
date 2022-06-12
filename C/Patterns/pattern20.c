#include <stdio.h>
#include <cs50.h>

void pattern20(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern20(n);
  return 0;
}



void pattern20(int n)
{
    int v=1;
    for(int row=1; row<=n; row++)
    {
       for(int col=1; col<=row; col++)
       {
            printf("%i" , v);
            printf(" ");
            v = v+1;
       }
    printf("\n");
    }
}
