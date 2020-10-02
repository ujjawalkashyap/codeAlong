#include <iostream>
#include<string>

using namespace std;

class Person{
    int id;
    string name;

public:
    // if we don't keep this as virtual function then the second pointer will point to the base class member function
    virtual void aboutMe(){
        cout<<"I am a person\n";
    }
};

class Student: public Person{
public:
    void aboutMe(){
        cout<<"I am a Student\n";
    }
};

int main(){
    Student *p= new Student();
    p->aboutMe();

    Person *q= new Student();
    q->aboutMe();
    return 0;
}
