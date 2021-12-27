//Write a program to print the address of a variable. Use this address to get the value of this variable
#include <stdio.h>
int main()
{
    int a=4;
    int *ptr=&a;
    printf("The address of a is %u\n", ptr);    
    printf("The value of a is %d", *ptr);    
return 0;
}