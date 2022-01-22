#include<iostream>
using namespace std;
int nCr(int n, int r){
    int ans=1;
        for(int i=1; i<=n; i++){
              ans=ans*i;
        }
    int anstwo=1;
    for(int i=1; i<=r; i++){
              anstwo=anstwo*i;
        }
    int ansthree=1;
      for(int i=1; i<=(n-r); i++){
              ansthree=ansthree*i;
        }
        int fans= ans/((anstwo)*(ansthree));
        return fans;
}
int main(){
    cout<< nCr(0,0);
    return 0;
}