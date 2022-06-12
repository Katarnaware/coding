#include <stdio.h>
#include <cs50.h>

void pattern23(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern23(n);
  return 0;
}



void pattern23(int n)
{
    int i=n, j=0, k=n;

    for(int row=1; row<=2*n; row++)
    {
        if(row>n)
        {
            for(int col=1; col<=k; col++)
            {
                if(col==1 || col==k)
                printf("*");
                else
                printf(" ");
            }

            for(int space=1; space<=j*2; space++)
                printf(" ");

             for(int col=1; col<=k; col++)
            {
                if(col==1 || col==k)
                printf("*");
                else
                printf(" ");
            }

            k--;
            j++;

        }

        else
        {
            for(int col=1; col<=row; col++)
            {
                if(col==1 || col==row)
                printf("*");
                else
                printf(" ");
            }

           for(int space=1; space<=2*i-2; space++)
                printf(" ");

            for(int col=1; col<=row; col++)
            {
                if(col==1 || col==row)
                printf("*");
                else
                printf(" ");
            }

        i--;
        }

    printf("\n");
    }

}

