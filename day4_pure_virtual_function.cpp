#include <iostream>
#include <string>

using namespace std;

class person{
string name;

public:

    virtual void aboutMe(){
        cout<<"I am a person\n";
    }

    virtual void addCourse(string s)=0;

};

class student: public person{
public:
    void aboutMe(){
        cout<<"I am a student\n";

    }

    void addCourse(string s){
        cout<<s<<'\n';
    }
};
int main(){
person *p= new student();
p->aboutMe();
p->addCourse("history");

return 0;

}
