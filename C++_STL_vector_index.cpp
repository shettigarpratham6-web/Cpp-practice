#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
   cout<<"value at index 0: "<<vec.at(0)<<endl;
   cout<<"value at index 1: "<<vec.at(1)<<endl;
   cout<<"value at index 2: "<<vec.at(2)<<endl;
   
    
    
    return 0;
}