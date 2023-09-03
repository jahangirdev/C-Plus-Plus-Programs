#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({3, 7});
    vp.push_back({2, 3});
    vp.push_back({4, 1});
    vp.push_back({3, 7});
    vp.push_back({6, 4});

    cout<<"Initial pairs:"<<endl;

    for( auto p : vp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"After sorting:"<<endl;
    sort(vp, vp.begin(), vp.end());

    for( auto p : vp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}
