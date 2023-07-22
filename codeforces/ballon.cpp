#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    int n, k;
    bool possible = true;
    cin>>n>>k>>s;

    for(int i = 0; i<s.length(); i++){
        int count = std::count(s.begin(), s.end(), s[i]);
        if(count > k){
            possible = false;
            break;
        }
    }
    if(possible){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
