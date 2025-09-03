#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number<0)
    {
        number=-number;
        
    }
    string str=to_string(number);
    int digits=str.length();
    cout<<"Total number of digits is: "<<digits<<endl;
    return 0;
}