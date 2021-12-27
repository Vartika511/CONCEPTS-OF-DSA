//Write a program using a function which calculate the sum and average
// of two numbers. Use pointers and print the value of sum and average in main()
 #include <stdio.h>

void sumandavg(int x, int y, int *sum, float *avg){
    *sum = x+y;
    *avg = (float)*sum/2;
   }
 int main()
{
     int a=4, b=5, sum;
     float avg;
     sumandavg(a,b,&sum,&avg); 
    printf("The suma and avg are %d and %f", sum, avg);
     return 0;
 }