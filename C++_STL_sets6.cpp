#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s={1,2,3,4,5};
    cout<<*(s.begin())<<endl;
    cout<<"count 2: "<<s.count(2)<<endl;
    cout<<"count 5: "<<s.count(5)<<endl;
    cout<<"count 6: "<<s.count(6)<<endl;
    return 0;
}