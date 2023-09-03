#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int small = 0, capital = 0;
    std::string s;
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            capital++;
        }
        else if(s[i] >= 97 && s[i] <= 122){
            small++;
        }
    }
    if(capital > small){
        for(int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);
    }
    else{
        for(int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
    }
    cout<<s<<endl;
    return 0;
}
