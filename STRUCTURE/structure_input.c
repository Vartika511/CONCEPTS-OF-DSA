#include <stdio.h>

struct Employee{
    int code;
    float salary;
    char name[100];
};

int main()
{
    struct Employee e1;
    e1.code= 34;
    e1.salary= 234.6;
    strcpy(e1.name,"Vartika");

    printf("%d", e1.name);
        
    return 0;
}