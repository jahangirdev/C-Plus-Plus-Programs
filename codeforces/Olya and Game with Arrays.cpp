#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector <vector<int>> v(n);
        for(int i = 0; i < n; i++){
            int m;
            cin>>m;
            while(m--){
                int a;
                cin>>a;
                v[i].push_back(a);
            }
        }
        if(n == 1){
            cout<<*min_element(v[0].begin(), v[0].end())<<endl;
        }
        else{
            vector <int> minall;
            for( auto &e : v){
                auto mn = min_element(e.begin(), e.end());
                minall.push_back(*mn);
                e.erase(mn);

            }

            sort(minall.begin(), minall.end());
            long long int secMinTotal = 0;
            set <long long int> secondMin;
            for( auto e : v){
                int mn = *min_element(e.begin(), e.end());
                secMinTotal += mn;
                secondMin.insert(mn);

            }
            cout<<(minall[0]+secMinTotal-*secondMin.begin())<<endl;

        }

    }
    return 0;
}
