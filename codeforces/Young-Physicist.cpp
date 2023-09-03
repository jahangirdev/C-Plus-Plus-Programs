#include<iostream>
using namespace std;

int main(){
    int n, sumI=0, sumJ=0, sumK=0;
    cin>>n;
    while(n--){
        int i, j, k;
        cin>>i>>j>>k;
        sumI += i;
        sumJ += j;
        sumK += k;
    }
    if(sumI == 0 && sumJ == 0 && sumK == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
