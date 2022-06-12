#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc==2)
    printf("hello, %s\n" , argv[1]);  // argc is number of strings includes './arg'. And argv[1] is string after ./arg
    else
    printf("error\n");

    return 0;
}