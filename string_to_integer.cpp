#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string (numbers): ";
    cin>>str;
    int num=stoi(str);
    cout<<"After converting it to integer: "<<num<<endl;
    cout<<"verifying, by adding 1 to it: "<<endl;
    cout<<num+1<<endl;


    return 0;
}