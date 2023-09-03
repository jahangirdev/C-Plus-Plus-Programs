#include<iostream>
#include<set>
using namespace std;

int main(){
    int a, b, c;
    set <int> s;
    cin>>a>>b>>c;
    s.insert((a+b)*c);
    s.insert(a*(b+c));
    s.insert(a*b*c);
    s.insert(a+b+c);
    auto res = (--s.end());
    cout<<*res<<endl;
    return 0;
}
