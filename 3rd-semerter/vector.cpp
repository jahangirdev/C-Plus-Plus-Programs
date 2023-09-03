#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    int i = 0;
    while(i < v.size()){
        cout<<v[i]<<endl;
        i++;
    }
    cout<<"after editing"<<endl;
    v[2] = 3;
    v[3] = 4;
    for( auto u : v){
        cout<<u<<endl;
    }
    return 0;
}
