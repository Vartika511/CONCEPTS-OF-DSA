#include <stdio.h>
int sum (int a , int b){
    int c;
    c= a+b;
    a=567;
    b= 789;
    return c;
}
int main()
{   
    int a=4, b=7;

    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a,b));
    printf("The value of a and b is %d and %d\n", a, b);
    return 0;
}

/* The value of a and b is 4 and 7
The value of 4+7 is 11
The value of a and b is 4 and 7 */