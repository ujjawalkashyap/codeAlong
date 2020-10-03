#include<iostream>
#include <string>

using namespace std;
class person{
int id;
string s;
public:
    virtual ~person(){//making the deconstuctor virtual so that the when deleting, it calls the decorstuctor of the correct class
        cout<<"deleting a person\n";
    }

    virtual void aboutMe(){
        cout<<"I am a person\n";
    }
};

class student: public person{
    ~student(){
        cout<<"deleting a student\n";
    };

    void aboutMe(){
        cout<<"I am a student\n";
    }

};



int main(){
person *p= new student();
p->aboutMe();
delete p;
return 0;
}
