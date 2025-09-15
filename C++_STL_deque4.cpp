#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d={1,2,3,4,5};
    cout<<"Before insertion of a new element: "<<endl;
    for(int val:d){
        cout<<val<<endl;
    }
    d[2]=6;
    cout<<"After insertion of a new element: "<<endl;
    
    for(int val:d){
        cout<<val<<endl;
    }
    return 0;

}