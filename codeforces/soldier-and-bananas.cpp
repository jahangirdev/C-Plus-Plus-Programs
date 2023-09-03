#include<iostream>

using namespace std;

int main(){
    int k, n, w, cost=0, i=1;
    cin>>k>>n>>w;
    while(i <= w){
        cost += i*k;
        i++;
    }
    int borrow = cost-n >= 0 ? cost-n : 0;
    cout<<borrow<<endl;
    return 0;
}
