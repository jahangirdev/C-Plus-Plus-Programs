#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        for(int i = 0; i<8; i++){
            string s;
            cin>>s;
            for(int j = 0; j<s.size(); j++){
                if(s[j] >= 65 && s[j] <= 122){
                    cout<<s[j];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
