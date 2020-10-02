#include<iostream>
using namespace std;

class counter{

unsigned int count;

public:
    counter():count(0){

    }

    counter operator ++(){
        ++count;
        counter temp;
        temp.count=count;
        return temp;
    }

    void getCount(){

    cout<<"count is "<<count<<'\n';
    }
};

int main(){
counter c1,c2,c3;
++c1;
++c2;
++c2;
c3=++c2;
c1.getCount();
c2.getCount();
c3.getCount();
return 0;
}
