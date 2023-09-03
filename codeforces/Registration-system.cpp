#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    map <string, int> names;

    cin>>n;
    while(n--){
       string name;
       cin>>name;
       if(names[name] < 1){
        cout<<"OK"<<endl;
       }
       else{
        string newName = name+to_string(names[name]);
        cout<<newName<<endl;
       }
       names[name]++;
    }
    return 0;
}
