#include<iostream>
#include<map>

using namespace std;

int main(){
    int n, m;
    map <string, string> users;

    cin>>n>>m;
    while(n--){
        string name, ip;
        cin>>name>>ip;
        users[ip+";"] = name;
    }
    while(m--){
        string cmd, ip;
        cin>>cmd>>ip;
        cout<<cmd<<" "<<ip<<" #"<<users[ip]<<endl;
    }
    return 0;
}
