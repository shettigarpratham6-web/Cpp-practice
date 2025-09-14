#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l={1,2,3,4,5};
    cout<<"before reversing: "<<endl;
    for(int val:l){
        cout<<val<<endl;
    }
    cout<<"After reversing: "<<endl;
    l.reverse();
    for(int val:l){
        cout<<val<<endl;
    }
    cout<<endl;
    return 0;
}