#include <bits/stdc++.h>
using namespace std;

int main(){
    string situation, si0 = "0000000", si1 = "1111111";
    cin>>situation;
    if(strstr(situation.c_str(), si0.c_str()) || strstr(situation.c_str(), si1.c_str()))
        cout<<"YES"<<endl;
    else
        cout<<"NO";
    return 0;
}
