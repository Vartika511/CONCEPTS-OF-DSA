#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int temp =i;
        while(j<=i){
            cout<<temp;
            temp++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/* Input 
4
Output 
1
23
345
4567 */