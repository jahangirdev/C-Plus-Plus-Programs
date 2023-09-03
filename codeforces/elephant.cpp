#include<iostream>
using namespace std;

int main(){
    int x, i = 0, path = 0;
    cin>>x;
    while(path < x){
        if(path + 5 <= x){
            path +=5;
            i++;
        }
        else if(path + 4 <= x){
            path +=4;
            i++;
        }
        else if(path + 3 <= x){
            path +=3;
            i++;
        }
        else if(path + 2 <= x){
            path +=2;
            i++;
        }
        else if(path + 1 <= x){
            path +=1;
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}
