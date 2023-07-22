#include<iostream>
using namespace std;
int main(){
    int t, i, cnt = 0;
    string s, code = "codeforces";
    cin>>t;
    while(t--){

        cin>>s;
        for(i = 0; i<10; i++){
            if(s[i] != code[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        s = "";
        cnt = 0;
    }
    return 0;
}
