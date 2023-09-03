#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> coins;
    int n, total = 0, myTotal = 0, count = 0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        coins.push_back(a);
        total += a;
    }
    sort(coins.begin(), coins.end());
    int i = coins.size()-1;
    while(total/2 >= myTotal){
        myTotal += coins[i];
        i--;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
