#include <iostream>
#include <string>
using namespace std;

class Student{
string name;

public:
    void show(){
        cout<<"Student\n";
    }
};

class Employee{
string name;

public:
    void show(){
        cout<<"Employee\n";
    }
};

class Manager:public Student,public Employee{
string name;

public:
    void getManager(){
    }
};

int main(){
Manager ManagerObj;
//ManagerObj.show();//This statement will give us error as there is ambiguity for show function as we have two copy of show
ManagerObj.Student::show();
}
