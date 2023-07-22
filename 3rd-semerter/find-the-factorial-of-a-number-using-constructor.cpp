/* A program to find the factorial of any number using constructor */
#include<iostream>
using namespace std;

class Factorial{
    int n, i;
    long int f;
public:
    Factorial(){
        cout<<"Enter a number:\n";
        cin>>n;
        f = 1;
        for(i = 1; i <= n; i++){
            f *= i;
        }
    }

    void display(){
        cout<<"The result is :"<<f<<endl;
    }
};

int main(){
    Factorial obj;
    obj.display();
    return 0;
}
