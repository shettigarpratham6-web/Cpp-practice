#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>vec(5,10);
   for(int val:vec){
       cout<<val<<endl;
   }
 
    return 0;
}