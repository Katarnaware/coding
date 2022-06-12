#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long m = 1;

    long n = get_long("Enter number between 2-20: \n");

    if(n<=1)
    return 1;
    else if (n<=20)
    {
       while(n!=1)       //   (by using do while loop)
       {
          m = m*n;               // int f=1 i=1   { f=f*i , i++} while(i<=n)
            n--;
        }

        printf("Factorial of your number is: %li\n" , m);
    }
    else
    return 1;

    return 0;
}
