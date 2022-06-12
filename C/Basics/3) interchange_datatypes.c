#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Through 0&1s we can represent integers. Characters are linked with numbers.
    // Therefore, an interger represents a number as well as a character.
    // For more details check ASCII Table
    char c1 = 'h';
    char c2 = 'i';
    char c3 = '!'; //
    printf("%i, %i, %i\n", c1,c2,c3);


    // here we converted integer to it's aternative representation.
    int a = 35;
    printf("%c\n" , a);


    // string is an array of chars.
    string name = "sam";
    printf("%i, %i, %i\n" , name[0], name[1], name[2]);


    return 0;

}