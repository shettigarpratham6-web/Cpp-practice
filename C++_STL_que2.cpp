#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Queue elements are: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;
    return 0;
}