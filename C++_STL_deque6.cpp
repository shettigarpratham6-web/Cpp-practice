#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d={1,2,3,4,5,6,7,8,9};
    cout<<"Before the insertion of an element size of deque: ";
    cout<<d.size()<<endl;
    for(int val:d){
        cout<<val<<endl;
    }
    cout<<"After the insertion of an element size of deque: ";
    d.insert(d.begin()+2,10);
    cout<<d.size()<<endl;
     for(int val:d){
        cout<<val<<endl;
    }

   
    cout<<endl;
    return 0;
}