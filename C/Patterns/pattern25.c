#include <stdio.h>
#include <cs50.h>

void pattern25(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern25(n);
  return 0;
}



void pattern25(int n)
{
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row+1; col++)
        {
            printf("%i" , row);
        }

        printf("\n");
    }

}
