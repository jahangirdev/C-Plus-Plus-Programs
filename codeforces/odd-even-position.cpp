#include<iostream>
using namespace std;

int main(){
    long long int n, k, result;
    cin>>n>>k;
    if(k<= (n+1)/2){
        result = 1 + (k-1) * 2;
    }
    else{
        long long int sub = n % 2 == 0 ? n/2 : (n+1)/2;
        result = 2 + (k-sub-1)*2;
    }
    cout<<result<<endl;
    return 0;

}
