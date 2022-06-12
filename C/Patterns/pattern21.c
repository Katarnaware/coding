#include <stdio.h>
#include <cs50.h>

void pattern21(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern21(n);
  return 0;
}



void pattern21(int n)
{

    for(int row=1; row<=n; row++)
    {
        if(row%2)
        {
            for(int col=1; col<=row; col++)
            {
                if(col%2)
                printf("1");
                else
                printf("0");
            }
        }

        else
        {
            for(int col=1; col<=row; col++)
            {
                if(col%2)
                printf("0");
                else
                printf("1");
            }
        }


    printf("\n");
    }
}
