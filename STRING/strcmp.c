#include <stdio.h>
#include <string.h>
int main()
{
    //strcmp compares the strig return 0 if the string is same
    // and returns 1 or-1 according to the string.
    char *str= "Vartika";
    char st[34]= "Vartika";
   int val= strcmp(st,str);
    printf("Now st is %d", val);
    return 0;
}