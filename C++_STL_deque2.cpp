#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(30);
    d.push_front(40);
    for(int val:d){
        cout<<val<<endl;
    }
    cout<<endl;
    return 0;
}