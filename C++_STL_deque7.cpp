#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d={1,2,3,4,5,6};
    cout<<"Before resize: size= ";
    cout<<d.size()<<endl;
    d.resize(10);
    cout<<"After resize: size= ";
    cout<<d.size()<<endl;
    return 0;
}