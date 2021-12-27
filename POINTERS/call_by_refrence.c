#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=3, y=4;
    printf("The value of x and y is %d and %d\n", x,y);
    swap(&x, &y);
    printf("The value of x and y is %d and %d\n", x,y);
    return 0;
}
/* The value of x and y is 3 and 4
The value of x and y is 4 and 3 */
// Swap can only be done by call of refrence 