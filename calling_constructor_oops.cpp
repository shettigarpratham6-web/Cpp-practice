#include<iostream>
using namespace std;
class student{
    public:
        string name;
        double CGPA;
    student(string name,double CGPA)
    {
        this->name=name;
        this->CGPA=CGPA;
    }  
    void getinfo()
    {
        cout<<"name: "<<name<<endl;
        cout<<"CGPA: "<<CGPA<<endl;
    }        
};
int main()
{
    student s1("Pratham",9.975);
    s1.getinfo();
    return 0;
}