#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
        string name;
        string dept;
        string subject;
        double salary;

};

class student:public Teacher{
    public:
        int age;
        int rollno;

};
class gradstudent:public student{
    public:
        string research;
};
int main()
{
    gradstudent s1;
    s1.name="abc";
    s1.age=20;
    s1.rollno=145;
    s1.research="xyz";
    cout<<"student name: "<<s1.name<<endl;
    cout<<"student age: "<<s1.age<<endl;
    cout<<"student rollno: "<<s1.rollno<<endl;
    cout<<"student research: "<<s1.research<<endl;


    return 0;
}