#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    map <string, int> p;
    cin>>n;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        p[s]++;
        if(p[s] > 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
