#include <stdio.h>
#include <string.h>
int main()
{
    //strcpy is used to copy the string
    char *str= "Vartika";
    char st[34];
    strcpy(st,str);
    printf("Now st is %s", st);
    return 0;
}