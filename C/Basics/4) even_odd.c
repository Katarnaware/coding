#include <stdio.h>
#include <cs50.h>

void even_odd(int number);

int main(void)
{
    int a = get_int("Number? : ");
    even_odd(a);
    return 0;
}
   
   

void even_odd(int number)
{
    if(number%2 == 0)
    printf("It is an even number\n");
    else 
    printf("It is an odd number\n");
}   
