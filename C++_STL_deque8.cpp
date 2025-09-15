#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d={1,2,3,4,5,6,7,8,9};
    cout<<"Before clear: size= ";
     cout<<d.size()<<endl;
    d.clear();
    cout<<"After clear: size= ";
    cout<<d.size()<<endl;
    


    return 0;
}