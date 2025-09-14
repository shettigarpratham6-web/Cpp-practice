#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l={1,2,3,4,5,6};
    cout<<"size of list: "<<l.size()<<endl;
    l.clear();
    cout<<"size of list: "<<l.size()<<endl;
    cout<<"is empty: "<<l.empty()<<endl;
    l.push_back(7);
    cout<<"is empty: "<<l.empty()<<endl;
    return 0;
}