#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    cout<<"Before erasing: "<<endl;
    for(auto val:s){
        cout<<val<<endl;
    }
s.erase(3);
cout<<"After erasing: "<<endl;
 for(auto val:s){
    cout<<val<<endl;
 }
    return 0;
}