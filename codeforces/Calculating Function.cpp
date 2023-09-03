#include<iostream>

using namespace std;

int main(){
    long long int n, lenOdd, lenEven, sumOdd, sumEven, sum;
    cin>>n;
    if(n & 1){
        lenOdd = (n+1)/2;
        lenEven = (n-1)/2;
    }
    else{
        lenOdd = n/2;
        lenEven = n/2;
    }
    sumOdd = lenOdd*lenOdd;
    sumEven = lenEven*(lenEven+1);
    sum = sumEven - sumOdd;
    cout<<sum<<endl;
    return 0;
}
