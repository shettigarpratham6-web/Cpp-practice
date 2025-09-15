#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d={1,2,3,4,5};
    for(int val:d){
        cout<<val<<endl;
    }
    cout<<endl;
    return 0;
}