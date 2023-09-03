#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    if(t.compare(s) == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
