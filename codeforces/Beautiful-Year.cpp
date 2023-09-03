#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int y;
    cin>>y;
    while(true){
        y++;
        string year = to_string(y);
        sort(year.begin(), year.end());
        bool distinct = true;
        for(int i = 0; i<year.size(); i++){
            if(year[i] == year[i+1]){
                distinct = false;
                break;
            }
        }
        if(distinct == true){
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}
