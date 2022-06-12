// print each char

#include <stdio.h>
#include <cs50.h>
#include <string.h>  //for strlen()

int main(int argc, string argv[])
{
   if(argc==2)
   {
       for(int i=0; i<strlen(argv[1]); i++)
       {
           printf("%c\n" , argv[1][i]);  // its 2d array, 1st arg store sting , second arg store char of strings
       }
   }
   else
   printf("Error\n");
}