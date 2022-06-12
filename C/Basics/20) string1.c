#include <stdio.h>
#include <cs50.h>
// string ends with '\0' as char

#include <string.h>

int main(void)
{
    string s  = get_string("Input: \n");

    printf("Output: \n");

    for(int i=0; s[i]!='\0'; i++)  // s[i]!='\0'  OR  i<strlen(s) ;
    {
       printf("%c\n" , s[i]);
    }

    return 0;

}