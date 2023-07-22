#include<iostream>
using namespace std;
void broke(int, int);
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
void broke(int n, int m){
    if(n == m){
        cout<<"YES"<<endl;
    }
    else if(n >= m && n % 3 == 0){
        int newN = (n/3)*2;
        if(n/3 == m){
            cout<<"YES"<<endl;
        }
        else broke(newN, m);
    }
    else {
        cout<<"NO"<<endl;
    }
}
