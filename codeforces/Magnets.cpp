#include<iostream>

using namespace std;

int main(){
    int n, prev, count = 1;
    cin>>n;
    bool first = true;
    while(n--){
        int curr;
        cin>>curr;
        if(prev != curr && !first)
            count++;
        prev = curr;
        first = false;
    }

    cout<<count<<endl;
    return 0;
}
