// sum and average of inputs in float

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Number 1: \n");
    int b = get_int("Number 2: \n");
    int c = get_int("Number 3: \n");
    
    int sum = a+b+c;

    printf("%f" , sum/float 3);// (Showing float as an error)

    return 0;

}
