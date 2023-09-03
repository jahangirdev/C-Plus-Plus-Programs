#include<iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int w, f, n, time = 0;
        cin>>w>>f>>n;
        while(n--){
            int s;
            cin>>s;
            while(s > totalS){
               time++;
                totalS += w+f;
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
