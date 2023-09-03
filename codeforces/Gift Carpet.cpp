#include<iostream>
#include<vector>
using namespace std;

int main(){
    string txt = "vika";
    int T;
    cin>>T;
    while(T--){
        int n, m, p, count = 0;
        cin>>n>>m;
        p = n;
        vector<string> v;
        while(n--){
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int i = 0; i < m; i++){
            for(auto e:v){
                if(e[i] == txt[count]){
                    count++;
                    break;
                }
            }
        }
        if(count == txt.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
