#include<iostream>

using namespace std;

int main(){
    bool almostLucky = false;
    int n, lucky[28] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777};
    cin>>n;
    for(int i = 0; i<28; i++){
        if(n==lucky[i] || n % lucky[i] == 0){
            almostLucky = true;
            break;
        }
    }
    if(almostLucky)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
