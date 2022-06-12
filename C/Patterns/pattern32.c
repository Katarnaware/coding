#include <stdio.h>
#include <cs50.h>

void pattern32(int);

int main(void)
{
    int n = get_int("Size?\n");
    printf("\n");

    pattern32(n);
    return 0;
}

a

void pattern32(int n)
{
    char temp='a';

    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            printf("%c" , temp);

            if(temp>='a' && temp<='z')
                temp=(temp+1)-32;
            else
                temp=(temp+1)+32;
        }



        printf("\n");
    }
}