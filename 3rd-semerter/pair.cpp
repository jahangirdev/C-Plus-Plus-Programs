#include<iostream>
using namespace std;

int main(){
    pair <int, int> p;
    p = {1, 3};
    cout<<"First value is: "<<p.first<<" and second value is: "<<p.second<<endl;

    cout<<"After editing:"<<endl;

    p.first = 3;
    p.second = 7;
    cout<<"First value is: "<<p.first<<" and second value is: "<<p.second<<endl;
    return 0;
}
