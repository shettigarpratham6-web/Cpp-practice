#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d={1,2,3,4,5};
    cout<<"Is empty: "<<d.empty()<<endl;
    d.clear();
    cout<<"Is empty: "<<d.empty()<<endl;
    return 0;
}