#include<iostream>
using namespace std;
int main()
{
    string name="Pratham Shettigar";
    cout<<name<<endl;
    cout<<name.length()<<endl;
    cout<<name.substr(0,7)<<endl;
    cout<<name.compare(0,7,"Pratham")<<endl;
    cout<<name.substr(8,(name.length()-1))<<endl;

    return 0;
}