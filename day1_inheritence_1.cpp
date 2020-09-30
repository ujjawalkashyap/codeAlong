#include <iostream>
#include <string>
using namespace std;

class person{
int id;
string name;
public:

    void aboutMe(){
    cout<<"person";

    }
    void hello(){
    cout<<"hello";
    }

};

class student: public person{

public:
    void aboutMe(){
        cout<<"student";
    }
};

int main(){

student *p= new student();
p->hello();
cout<<" ";
p->aboutMe();
delete p;
return 0;
}
