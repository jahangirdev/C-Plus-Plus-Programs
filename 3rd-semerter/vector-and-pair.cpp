#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <pair <int, int>> vp;
    vp.push_back({1, 3});
    vp.push_back({2, 6});
    vp.push_back({2, 3});
    vp.push_back({5, 1});

    for (auto p : vp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
