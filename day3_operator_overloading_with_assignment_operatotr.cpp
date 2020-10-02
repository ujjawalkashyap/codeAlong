#include<iostream>
using namespace std;

class counter{

unsigned int count;

public:
    counter():count(0){
    }

    counter(int initial_count):count(initial_count){

    }
    counter operator ++(){
        ++count;
        /*counter temp;
        temp.count=count;
        return temp;*/
        return counter(count);// unnamed temporary object
    }

    unsigned int getCount(){
        return count;

    }
};

int main(){
counter c1,c2,c3;
++c1;
++c2;
++c2;
c3=++c2;
cout<<"count is "<<c1.getCount()<<'\n';
cout<<"count is "<<c1.getCount()<<'\n';
cout<<"count is "<<c1.getCount()<<'\n';

return 0;
}
