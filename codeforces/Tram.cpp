#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, passenger = 0;
    vector <int> v;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        passenger -= a;
        passenger += b;
        v.push_back(passenger);
    }
    cout<<*max_element(v.begin(), v.end())<<endl;
    return 0;
}
