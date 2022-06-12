#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter 1st number: \n");
    int b = get_int("Enter 2nd number: \n");

    char c = get_char("Which opreation to perform? :  +, -, /, *\n");

    switch(c)
    {
        case'+':
        {
            printf("Addition Result: %i\n" , a+b);
            break;
        }

        case'-':
        {
            printf("Subtraction Result: %i\n" , a-b);
            break;
        }

        case'*':
        {
            printf("Multiplication Result: %i\n" , a*b);
            break;
        }

        case'/':
        {
            printf("Division Result: %i\n" , a/b);
            break;
        }

    }

    return 0;

}