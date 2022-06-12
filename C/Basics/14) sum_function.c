#include <stdio.h>
#include <cs50.h>

int add(int a, int b);
int main(void)
{
    int x, y;
    
        x = get_int("Enter number 1: \n");
        y = get_int("Enter number 2: \n");
  
   int sum = add(x , y);
   printf("Their sum is: %i\n" , sum);
   return 0;
}


int add(int a, int b)
{
    return a+b;
}