#include <stdio.h>
#include "my_string_func.h"
/* read_line: read a line into s, return length */
int read_line(char str[]){
    int length=0;
    while (*str!='\0')
    {
        length++;
        str++;
    }
    
    return length;
}



void my_to_upper(char* str_in, char* str_out)
{
int i=0;

printf("entering to upper func..\n");

while(*str_in!='\0'){
    if(*str_in>96 && *str_in<123)
       *str_out=*str_in-32;
    else
       *str_out=*str_in;
    
    str_in++;
    str_out++;
    }
    printf("leaving to upper func..\n");

/* You must implement your own version of toupper using the two strings
str_in and str_out.
Loop over the str_in (as long as it "contains" something).
Look at the "current" character and check if its a lowercase letter.
If it is, convert it to the upper case version and add that to the
str_out character array
*/

}
