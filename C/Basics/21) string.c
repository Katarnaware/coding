// string is an array of char
// string has '\0' as last element

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "Sam";

    printf("%c, %c, %c, %i, %i\n" , s[0], s[1], s[2], s[3], s[4]);  // here we added s[4], memory which doesnt exist, hence it will give random value.

    return 0;
}