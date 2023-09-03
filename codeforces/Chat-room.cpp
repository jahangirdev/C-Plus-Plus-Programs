#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s, lookFor = "hello";
    int ind = 0;
    cin>>s;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == lookFor[ind]){
            ind++;
        }
    }
    if(ind == lookFor.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
