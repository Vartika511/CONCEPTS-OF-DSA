#include <stdio.h>

struct Employee{
    int code;
    float salary;
    char name[100];
};

int main()
{
    struct Employee e1={100, 100.45, "Harry"};
    printf("%d\n",e1.code);
    printf("%s",e1.name);
    
        
    return 0;
}