
// doubt in this priblem


#include <stdio.h>
#include <cs50.h>

void pattern22(int);

int main(void)
{
    int n = get_int("Row Size?\n");
    printf("\n");

    pattern22(n);
    return 0;
}


void pattern22(int n)
{

    for(int row=1; row<=n; row++)
    {
        for(int space=1; space<=2*(n-row); space++)
            printf(" ");
            
        for(int col=1; col<=)

        printf("\n");
    }
}