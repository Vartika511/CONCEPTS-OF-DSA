#include <stdio.h>
#include <string.h>
int main()
{
    //strlen is used to find the length of the string.
    char *str= "Vartika";
   
    int a = strlen(str);

    printf("The length of string str is %d\n", a);
   
    return 0;
}