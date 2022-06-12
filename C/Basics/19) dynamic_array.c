// lets decide size of an array dynamically

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Total number of students? \n");

    int scores[a], sum = 0;  // declaring an array who will store scores of students dynamically (we can also do it by Const int a)


    for(int i=1; i<=a; i++)
    {
      scores[i] = get_int("Score of Student %i\n" , i);
      sum = sum + scores[i];
    }


    printf("Average is: %f\n" , sum/(float)a);
    return 0;
}