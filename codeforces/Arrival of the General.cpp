#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector <int> soldierLine;
    cin>>n;
    while(n--){
        int h;
        cin>>h;
        soldierLine.push_back(h);
    }
    int maxInd = max_element(soldierLine.begin(), soldierLine.end()) - soldierLine.begin();
    for( int i = maxInd; i >= 0; i--){
        int temp = soldierLine[i];
        soldierLine[i] = soldierLine[i-1];
        soldierLine[i-1] = temp;
    }

    int minInd = min_element(soldierLine.rbegin(), soldierLine.rend()) - soldierLine.rbegin();
    int swp = maxInd+minInd;
    cout<<swp<<endl;
    return 0;
}
