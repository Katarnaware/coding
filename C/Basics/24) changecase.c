#include <stdio.h>
#include <cs50.h>
#include <string.h> // for strlen()
#include <ctype.h>  // for toupper() and tolower()


int main(void)
{
    string s = get_string("Enter input: \n");
    printf("Output: \n");


    for(int i=0; i<strlen(s); i++)
    {
        s[i] = s[i] - 32;
        printf("%c" , s[i]);
    }


    // OR

    printf("\n");

    for(int i=0; i<strlen(s); i++)
    {
        printf("%c" , toupper(s[i]));   // toupper & lower function can be used by character by character only. therefore, use for loop.
    }


    printf("\n");


    return 0;
}

