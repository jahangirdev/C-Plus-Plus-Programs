#include<iostream>
#include<vector>

using namespace std;

class Person{
    private:
        int age = 30, id=3456432356, childs=3;
        vector < vector<int> > v, b, c, d, e, f, g;
        int setId(int a){
            id = a;
        }
        int setNoChilds(int c){
            childs = c;
        }
        void setAll(int a, int b, int c){
            age = a;
            id = b;
            childs = c;
        }

    public:
        void setAge(int a){
            age = a;
        }
        int getAge(){
            return age;
        }
        int getId(){
            return id;
        }
        int getNoChilds(){
            return childs;
        }
};

class Engineer: public Person{

};

int main(){
    Person p;
    Engineer e;
    cout<<"Size of Person: "<<(sizeof p)<<endl;
    cout<<"Size of Person: "<<(sizeof e)<<endl;
    return 0;
}
