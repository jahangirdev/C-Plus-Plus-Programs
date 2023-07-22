#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    int spaces = n - 1;
    for(i=0; i<=n; i++){
        for(j=0; j<=spaces; j++){
            cout<<"  ";
        }
        spaces--;
        for(j = 0; j<=i; j++){
            if(j == 0){
               cout<<j;
            }
            else{
                cout<<" "<<j;
            }
        }
        for(j = i-1; j>=0; j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    spaces = 0;
    for(i=i-2; i>=0; i--){
        for(j=0; j<=spaces; j++){
            cout<<"  ";
        }
        spaces++;
        for(j = 0; j<=i; j++){
            if(j == 0){
               cout<<j;
            }
            else{
                cout<<" "<<j;
            }
        }
        for(j = i-1; j>=0; j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}
