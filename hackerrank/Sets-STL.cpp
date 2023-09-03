#include<iostream>
#include<set>
using namespace std;
int main(){
    int Q;
    set <int> s;
    cin>>Q;
    while(Q--){
        int y, x;
        cin>>y>>x;
        switch(y){
            case 1:
               s.insert(x);
               break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if(s.count(x)) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
