#include <stdio.h>
#include <string.h>
int main()
{
    //strcat joins the string without any gap
    char *str= "Vartika ";
    char st[34]= "Hello ";
    strcat(st,str);
    printf("Now st is %s", st);
    return 0;
}