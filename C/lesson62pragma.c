#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Pragma is used to issue some special commands to compiler.
// Let's discuss some pre-defined macros now. A pre-defined macro 
// is a macro that has already been defined or understood 
// by C preprocessor and does not need a definition.

int main()
{
    printf("today date is " __DATE__);
    printf("\nthe time is " __TIME__);
    printf("\nthe file name is " __FILE__);
    // STDc tell us whether the complier works in ascii standar or not
    printf("\n%d\n", __STDC__);

  
    return 0;
}