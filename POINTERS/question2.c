//write a progrm having a variable i. Print the address 
// of i. Pass this variable to a function and print its address. 
//Are these address same ??

#include <stdio.h>

void address(int j){
  printf("The address of i in function %u", &j);
}


int main()
{
    int i;
    printf("THe address of i is %u\n", &i);
    address(i);
    return 0;
}
// The address will not be same.