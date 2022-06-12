// input by cs50 library files

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name;
    name = get_string("What's your name?\n");

    printf("hello, %s\n" , name);

    return 0;
}
