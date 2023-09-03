#include<iostream>
#include<set>

using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i = 1; i<=T; i++){
        int count = 0;
        set <pair <int, int>> students;
        int N, R;
        cin>>N>>R;
        while(R--){
            int id, sub;
            cin>>id>>sub;
            if(students.insert({id, sub}).second == 0){
                count++;
            }
        }
        string status = count > 0 ? "impossible" : "possible";
        cout<<"Scenario #"<<i<<": "<<status<<endl;
    }
    return 0;
}
