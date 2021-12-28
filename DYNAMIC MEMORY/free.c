// We can use free() function to allocate the memory.
// The memory allocated using calloc/malloc is not deallocated automatically.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *) malloc(600*sizeof(int));
    for(int i=0; i<600; i++){
        ptr2 = (int *) malloc(60000000* sizeof(int));
        printf("Enter the value of %d element", i);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    for(int i=0; i<6; i++){
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    return 0;
}