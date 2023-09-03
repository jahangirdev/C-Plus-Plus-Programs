#include<iostream>

using namespace std;

int main(){
    int n, count = 0;
    char s[1000];
    cin>>n;
    for(int i = 0; i <= n; i++ ){
        char ch = getchar();
        if(i > 0){
            if(s[i-1] == ch) ++count;
        }
        s[i] = ch;
    }
    cout<<count<<endl;
    return 0;
}
