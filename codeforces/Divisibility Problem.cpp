#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a % b == 0)
            cout<<0<<endl;
        else if(a > b){
            int moves = (a/b+1)*b - a;
            cout<<moves<<endl;
        }
        else{
            int moves = b-a;
            cout<<moves<<endl;
        }
    }
    return 0;
}
