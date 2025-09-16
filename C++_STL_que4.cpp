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
    cout<<"Is empty: "<<q.empty()<<endl;
    while(!q.empty()){
        q.pop();
    }
    cout<<"Is empty: "<<q.empty()<<endl;
    return 0;
}