#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    cout<<"first element: "<<vec.front()<<endl;
    cout<<"last element: "<<vec.back()<<endl;
   
    
    
    return 0;
}