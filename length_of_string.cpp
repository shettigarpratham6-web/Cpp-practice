#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<"<<< For confirmation >>>"<<endl<<"Entered string is: "<<str<<endl;
    int length;
    length=str.length();
    cout<<"The length of string is: "<<length<<endl;


    return 0;
}