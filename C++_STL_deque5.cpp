#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    cout<<"Before pop back: "<<endl;
    for(int val:d){
        cout<<val<<endl;
    }
    d.pop_back();
    cout<<"After pop back: "<<endl;
    for(int val:d){
        cout<<val<<endl;
    }

    return 0;
}