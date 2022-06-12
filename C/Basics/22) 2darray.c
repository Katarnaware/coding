// here in student[name][marks]

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Number of students: \n");
    int y = get_int("Number of subjects: \n");

    int i, j, sum=0;


    printf("\n");


    for(i=0; i<x; i++)
    {
        printf("student number: %i\n" , i);

        for(j=0; j<y; j++)
        {
           int student[i][j];

           student[i][j] = get_int("Enter marks of subject %i\n" , j);
           sum = sum + student[i][j];
        }


    printf("Sum is %i, Average is: %f\n" , sum, sum/(float)x);
        printf("\n");
        printf("\n");

    }

    return 0;
}cle