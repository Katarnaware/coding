#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int count = 0;
    
    int n = get_int("Enter the Number: \n");
    
    while(n!=0)
    {
        n = n/10;   // when we divide 1234/10 then we get ans (int as 123) and reminder as 4, so by dividing 4 times, 
                    //at 5th time we get reminder n=0
        count++;        
    }
    
    printf("Number of digits are: %i\n" , count);
    return 0;
}