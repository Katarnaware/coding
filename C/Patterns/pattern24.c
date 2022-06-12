#include <stdio.h>
#include <cs50.h>

void pattern24(int);

int main(void)
{
  int n = get_int("Rows Size?\n");
  printf("\n");

  pattern24(n);
  return 0;
}



void pattern24(int n)
{

    for(int row=1; row<=n; row++)
    {

       for(int space=1; space<=n-row; space++)  //for space
        printf(" ");



       if(row==1 || row==n)
       {
           for(int col=1; col<=n-1; col++)
            printf("*");
       }

       else
       {
           for(int col=1; col<=n-1; col++)
           {
               if(col==1 || col==n-1)
               printf("*");
               else
               printf(" ");
           }
       }

    printf("\n");
    }
}
