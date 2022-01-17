#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        
        while(j<=n-i+1){
               cout<<j;
               j++;
        }
        int star=(i*2)-2;
        while(star){
                 cout<<"*";
                 star--;
        }
        int l=(n-i)+1;
        while(l){
              cout<<l;
              l--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/* INPUT 
5
OUTPUT 
1234554321
1234**4321
123****321
12******21
1********1       */