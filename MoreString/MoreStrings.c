#include <stdio.h>
#include "my_string_func.c"
#define MAX_LENGTH 1000
int main()
{
char line[MAX_LENGTH];
char upper[MAX_LENGTH];
int line_length;
/* Use a while loop to read input lines as long as there are any.
For each input line, print the length of the line as well as
the upper case version of the line
NOTE You are NOT allowed to use the standard toupper(…)
function in string.h
*/

fgets(line,MAX_LENGTH,stdin);

my_to_upper(line,upper);

printf("%s\n",upper);


line_length=read_line(upper);
printf("Counted chars\n");
printf("Length: %d\t%s\n", line_length, upper);


return 0;
}