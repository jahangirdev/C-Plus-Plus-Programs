#include<iostream>
using namespace std;
int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>=m){
            broke(n, m);
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int broke(int n, int m){

    if(n % 3 == 0){
        n = (n/3)*2;
        if(n > m && n != m){
            broke(n, m);
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else {
      cout<<"NO"<<endl;
    }
}
