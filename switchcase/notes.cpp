#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int rs=1330;
    int hun=0, fif=0, tw=0, one=0;
    switch(true){
        case true: hun =rs/100;
         cout<<"notes of 100 "<<hun<<endl;
               rs=rs%100;
               fif=rs/50;
         cout<<"notes of 50 "<<fif<<endl;
                rs=rs%50;
                tw=rs/20;
        cout<<"notes of 20 "<<tw<<endl;
                rs=rs%20;
                one=rs/1;
        cout<<"notes of 1 "<<one<<endl;
               
    }
    return 0;
}