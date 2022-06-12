#include <stdio.h> //using switch case
#include <cs50.h>
#include <ctype.h>  //to use tolower() touppper() functions

int main(void)
{
    char ch = get_char("Enter the character: ");

    switch(tolower(ch))   // Converting capital letter outpu to lower
    {
        case'a':
        {
            printf("%c is a vowel\n" , ch);
            break;
        }

        case'e':
        {
            printf("%c is a vowel\n" , ch);
            break;
        }

        case'i':
        {
            printf("%c is a vowel\n" , ch);
            break;
        }

        case'o':
        {
            printf("%c is a vowel\n" , ch);
            break;
        }

        case'u':
        {
            printf("%c is a vowel\n" , ch);
            break;
        }
        default:
            printf("%c is a constant\n" , ch);
            
    }

}