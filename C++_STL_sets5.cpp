#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s={1,2,3,4,5};
   auto it=s.find(4);
   if(it!=s.end()){
    cout<<"element found: "<<*it<<endl;
   }
   else{
    cout<<"not found"<<endl;
   }


    return 0;
}