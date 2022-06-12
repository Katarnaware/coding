#include <stdio.h>  //else-if type
#include <cs50.h>

int main(void)
{
    int marks = get_int("Marks of the student out of 100: ");

    if(marks >= 95)
    printf("Grade: A++ (PASSED)\n");
    else if (marks >= 90)
    printf("Grade: A+ (PASSED)\n");
    else if (marks >= 80)
    printf("Grade: A (PASSED)\n");
    else if(marks >= 75)
    printf("Grade: B (PASSED\n");
    else if(marks >= 50)
    printf("Grade: C (PASSED)\n");
    else if(marks >= 35)
    printf("Grade: D (PASSED)\n");
    else
    printf("Grade: E (FIALED)\n");

    return 0;
}