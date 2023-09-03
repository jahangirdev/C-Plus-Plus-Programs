#include<iostream>

using namespace std;

int main(){
    int n, countA = 0, countD = 0;
    cin>>n;
    while(1+n--){
        char ch = getchar();
        if(ch=='A') ++countA;
        else if(ch == 'D') ++countD;
    }
    if(countA == countD) cout<<"Friendship"<<endl;
    else if(countA > countD) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
    return 0;
}
