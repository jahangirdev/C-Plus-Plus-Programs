#include<iostream>

using namespace std;

int main(){
    long long int n, k, odd, val;
    cin>>n>>k;
    if(n & 1){
        odd = (n+1)/2;
    }
    else{
        odd = n/2;
    }
    if(odd<k){
        val = 2*(k-odd);
    }
    else{
        val = 1+(k-1)*2;
    }
    cout<<val<<endl;
    return 0;
}
