#include<iostream>
using namespace std;
class student{
private:
    string password="123@xyz#";    
public:
    string name;
    string branch;
    int roll_no;
    int age;

string getpassword()
{
    return password;
}    
   
};
int main()
{
student s1;
s1.name="abc";
s1.branch="CSE";
s1.roll_no=890;
s1.age=20;
cout<<s1.getpassword()<<endl;



    return 0;
}