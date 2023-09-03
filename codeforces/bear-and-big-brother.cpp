#include<iostream>
using namespace std;
int years = 0;
void checkYear(int, int);

int main(){
    int a, b;
    cin>>a>>b;
    checkYear(a, b);
    cout<<years<<endl;
    return 0;
}
void checkYear(int a, int b){
    years++;
    if(a*3 <= b*2){
        checkYear(a*3, b*2);
    }
}
