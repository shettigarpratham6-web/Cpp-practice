#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    l={1,2,3,4,5,6,7,8,9};
    l.pop_front();
    l.pop_back();
    for(int value:l){
        cout<<value<<endl;
    }
    return 0;
}