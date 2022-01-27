#include<iostream>
using namespace std;
void swapalternate(int arr[], int size){
          for (int i = 0; i <size-1;)
          {
              swap(arr[i],arr[i+1]);
              i=i+2;
             
          }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    } 
          
}
int main(){
    int arr[9]={3,4,5,6,7,8,11,33,44};
    swapalternate(arr,9);
    return 0;
}