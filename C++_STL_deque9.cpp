#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d1,d2;
    d1={1,2,3,4,5};
    d2={6,7,8,9,10};
    d1.swap(d2);
    cout<<"Swaping : "<<endl;
    for(int val:d1){
        cout<<val<<endl;
    }
    return 0;
}