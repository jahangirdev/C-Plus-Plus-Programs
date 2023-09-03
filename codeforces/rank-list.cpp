#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(const pair <int, int> p1, const pair <int, int> p2){
    if(p1.first > p2.first) return 1;
    if(p1.first == p2.first && p1.second < p2.second) return 1;
    return 0;
}
int main(){
    int n, k, count = 0;
    vector <pair <int, int>> teams;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        int first, second;
        cin>>first>>second;
        teams.push_back({first, second});
    }

    sort(teams.begin(), teams.end(), cmp);
    cout<<std::count(teams.begin(), teams.end(), teams[k-1])<<endl;
    /*
    cout<<endl<<endl;
    for(auto team : teams){
        if(team.first == teams[k-1].first && team.second == teams[k-1].second) count++;
    }
    for(auto team : teams){
        cout<<team.first<<" "<<team.second<<endl;
    }
    */
    return 0;
}
