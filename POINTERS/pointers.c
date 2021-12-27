#include <stdio.h>
int main()
{
    // int * int_ptr; pointer to integer
    // char * ch_ptr; pointer to character
    // float * ch_ptr; pointer to float 
    int i = 34;
    int *j = &i; 
    int **k = &j;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %d\n", j);
    printf("The address of i is %d\n", &i);
    printf("The address of j is %d\n", &j);
    printf("The value of j is %d\n", *(&j));
    printf("The address of j is %d\n", k);
    printf("The address of k is %d\n", &k);


    return 0;
}
/* The value of i is 34
The value of i is 34
The address of i is 6422220
The address of i is 6422220
The address of j is 6422216
The value of j is 6422220
The address of j is 6422216
The address of k is 6422212 */