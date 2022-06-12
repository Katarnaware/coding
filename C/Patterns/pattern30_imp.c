#include <stdio.h>
#include <cs50.h>

int min(int a, int b);
void pattern30(int n);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern30(n);
    return 0;
}



int min(int a, int b)
{
    if(a>b)
    return b;
    else
    return a;
}



void pattern30(int n)
{
    int v=2*n-1;

    for(int row=0; row<v; row++)
    {
       for(int col=0; col<v; col++)
       {
           int indexvalue = min(min(col, (v-1)-col) , min(row , (v-1)-row));
           printf("%i" , indexvalue);
           printf(" ");
       }

        printf("\n");
    }


    printf("\n");
    // 2nd part



    v=2*n-1;

    for(int row=0; row<v; row++)
    {
       for(int col=0; col<v; col++)
       {
           int indexvalue = n- min(min(col, (v-1)-col) , min(row , (v-1)-row));
           printf("%i" , indexvalue);
           printf(" ");
       }

        printf("\n");
    }

}