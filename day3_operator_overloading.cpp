#include<iostream>
using namespace std;

class counter{

unsigned int count;

public:
    counter():count(0){

    }

    void operator ++(){
        ++count;
    }

    void getCount(){
    cout<<"count is "<<count<<'\n';
    }
};

int main(){
counter c1,c2;
++c1;
++c2;
++c2;
c1.getCount();
c2.getCount();

return 0;
}
