#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int r, sum = 0;
    int n = get_int("Enter the Number: \n");

    while(n!=0)
    {
        r = n%10;  // when we divide 1234/10, we get reminder (r) as the last digit, then initiate n=n/2 again and execute loop
        sum = sum + r; // by this we can get all digits but to get sum, we must use this eqn
        n = n/10;
    }

    printf("The sum is: %i\n" , sum);
    return 0;
}