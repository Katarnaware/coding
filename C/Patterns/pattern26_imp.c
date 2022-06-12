#include <stdio.h>
#include <cs50.h>

void pattern26(int);

int main(void)
{
  int n = get_int("Rows Size between 0-99?\n");
  printf("\n");

  pattern26(n);
  return 0;
}



void pattern26(int n)
{
    int v=1, col;



    for(int row=0; row<n; row++)
    {

        int i=0, k=1;    // declared inside row, because for next row we wanr same values of them


        for(int space=1; space<=2*row; space++)     // for spaces
        printf(" ");



        for(col=1; col<=n-row; col++)    //When 'for' loop exit the value of 'v' exceeds to 'v+1'
        {
            printf("%i" , v);
            v++;
            printf(" ");
        }



        if((v-1)>0 && (v-1)<10)    // 'space' printing for single and double digit
        printf(" ");
        else
        printf("");



        for(int temp=1; temp<=n-row; temp++)    // to print values of next traingle, we need value of 'k' i.e(1,3,7,13 series)
        {
            k=k+(2*i);
            i++;
        }



        for(int colm=1; colm<=n-row; colm++)   // next traingle value printing
        {
           printf("%i" , k+(v-1));   // colm(value)-col(value)=k     ,therefore, colm(value)=k+col(value),   where col(value)=v-1 , since the value of v exceeds by 1 when the loop exit//
           printf(" ");
           k++;
        }


        printf("\n");

    }

}
