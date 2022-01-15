#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
        
           while(j<n-i+1){
                cout<<" ";
                j++;
               
            } 
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
      }
    return 0;
}
/* INPUT 
3
OUTPUT 
  *
 **
*** */