#include<iostream>
using namespace std;

class Person{
    public:
    string name = "Jahangir";
    string getName(){
        return name;
    }
    protected:
    string dept = "CSE";
    string getDept(){
        return dept;
    }
};
class Dept : public Person{
public:
    string getDept(){
    return dept;
    }
};

int main(){
    Person person;
    Dept dept;
    cout<<person.getName()<<endl;
    cout<<dept.getDept()<<endl;
    return 0;
}
