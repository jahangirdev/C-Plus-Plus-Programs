#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    set <int> s;
    cin>>n;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    auto it = s.begin();
    if(s.size()>1){
        cout<<*++it<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
