#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1,l2;
    l1={1,2,3,4};
    l2={5,6,7,8,9};
    l1.merge(l2);
    for(int val:l1){
        cout<<val<<endl;
    }
    cout<<endl;
    
    return 0;
}