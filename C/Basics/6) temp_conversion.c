// lets do it with functions

#include <stdio.h>
#include <cs50.h>
#include <string.h>  // contains function that compares strings

void c2f(void);
void f2c(void);

int main(void)
{
 string choose = get_string("What conversion you want? : c2f or f2c\n");

 if(strcmp(choose , "c2f") == 0)  // strcmp(str1,str2) and returns 0 if both strings are same
 {                                // and string should written in double inverted commas
   c2f();
   return 0;
 }
 else if(strcmp(choose , "f2c") == 0)
 {
   f2c();
   return 0;
 }
 else return 1;
}



void c2f(void)
{
    float c = get_float(" Enter temperature in Degree Celcius: ");
    float f = c*(1.8) + 32;
    printf("Temperature in Farenheit: %f\n" , f);
}

void f2c(void)
{
    float f = get_float("Enter temperature in Farenheit: ");
    float c = (f-32)/1.8;
    printf("Temperature in Degree Celcius: %f\n" , c);
}