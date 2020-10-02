#include <iostream>
using namespace std;
class shape{
int side, length, breadth, radius;

public:

    void area(int s){

        cout<<s*s<<'\n';
    }

    void area(int l, int b){

        cout<<l*b<<'\n';
    }
};

int main(){
shape s;

s.area(2);
s.area(2,4);

return 0;
}
