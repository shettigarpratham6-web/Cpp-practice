#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    auto it=s.begin();
    for(int i=0;i<2;i++){
        it++;
    }
    cout<<*it<<endl;

    return 0;
}