// same as 2darray.c but much sophisticated

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Number of students: \n");
    int y = get_int("Number of subjects: \n");

    int sum=0, student[x][y];


    printf("\n");


    for(int i=1; i<=x; i++)
    {
        printf("student number: %i\n" , i);


        for(int j=1; j<=y; j++)
        {
            student[i-1][j-1] = get_int("Enter marks of subject %i\n" , j);
            sum = sum + student[i-1][j-1];
        }


    printf("Sum is %i, Average is: %f\n" , sum, sum/(float)x);
        printf("\n");
        printf("\n");

    }

    return 0;
}