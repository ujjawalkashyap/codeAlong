#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int binarySearch(int left,int right,int key){
    int mid=(left+right)/2;
    if(v[mid]==key)
        return mid;
    if(key<v[mid])
    binarySearch(left,mid,key);
    if(key>v[mid+1])
    binarySearch(mid+1,right,key);
}
int main(){
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(7);
v.push_back(8);
cout<<binarySearch(0,6,7);
return 0;
}
