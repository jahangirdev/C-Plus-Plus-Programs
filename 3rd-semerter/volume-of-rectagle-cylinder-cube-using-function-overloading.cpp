#include<iostream>
using namespace std;

float volume(float length, float width, float height){
    return length * width * height;
}

float volume(float r, float height){
    return 3.1416 * r * r * height;
}
float volume(float length){
    return length * length * length;
}

int main(){
    float r, length, width, height;
    while(1){
        int x;
        cout<<"1. Volume of Rectangle."<<endl;
        cout<<"2. Volume of Cylinder."<<endl;
        cout<<"3. Volume of Cube."<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your option (1/2/3/4):"<<endl;
        cin>>x;
        switch(x){
        case 1:
            cout<<"Enter the length, width and height of rectangle:"<<endl;
            cin>>length>>width>>height;
            cout<<"Volume of Rectangle is: "<<volume(length, width, height)<<endl<<endl;
            break;
        case 2:
            cout<<"Enter the radius of the circular base and the height of the cylinder:"<<endl;
            cin>>r>>height;
            cout<<"Volume of the cylinder is: "<<volume(r, height)<<endl<<endl;
            break;
        case 3:
            cout<<"Enter the length of a side of the cube:"<<endl;
            cin>>length;
            cout<<"Volume of the cube is: "<<volume(length)<<endl<<endl;
            break;
        default:
            exit(1);
        }

    }
    return 0;
}
