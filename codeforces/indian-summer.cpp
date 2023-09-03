#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector <pair <string, string>> v;
    cin>>n;
    for(int i = 0; i<n; i++){
        string tree, color;
        cin>>tree>>color;
        v.push_back({tree, color});
    }
    sort(v.begin(), v.end());
    int ue = unique(v.begin(), v.end()) - v.begin();
    cout<<ue<<endl;
    return 0;
}
