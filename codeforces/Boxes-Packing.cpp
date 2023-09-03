#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    int n, count = 0;
    vector <pair <int, int>> boxes;
    set <int> s;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(s.insert(a).second == 0) boxes.push_back({a, 0});
    }
    sort(boxes.begin(), boxes.end());
    for(int i = 0; i<boxes.size(); i++){
        for(int j = 0; j<boxes.size(); j++){
            if(boxes[i].first < boxes[j].first && boxes[j].second == 0){
                boxes[j].second = 1;
                count++;
                break;
            }
        }

    }
    cout<<boxes.size()-count+1<<endl;
    return 0;
}
