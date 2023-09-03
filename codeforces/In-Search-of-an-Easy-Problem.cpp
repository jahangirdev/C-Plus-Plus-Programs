#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> persons;
    int n;
    bool easy = true;
    cin>>n;
    while(n--){
        int inp;
        cin>>inp;
        if(inp == 1){
            easy = false;
            break;
        }
    }
    if(easy)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
