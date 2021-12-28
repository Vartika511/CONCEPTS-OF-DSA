#include <stdio.h>

struct Employee{
    int code;
    float salary;
    char name[100];
};

int main()
{
    struct Employee e1;
    struct Employee *ptr;
    ptr = &e1;
    (*ptr).code =101; //or you can also write: ptr->code = 101;
    ptr->code = 101;
    printf("%d",e1.code);

        
    return 0;
}