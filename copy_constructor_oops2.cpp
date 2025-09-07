#include<iostream>
using namespace std;
class student{
  public:
      string name;
      string branch;
      double CGPA;
  student(string name,string branch,double CGPA)
  {
    this->name=name;
    this->branch=branch;
    this->CGPA=CGPA;
  }

  void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"branch: "<<branch<<endl;
    cout<<"CGPA: "<<CGPA<<endl;
  }

  student(student &obj){
    cout<<"Copy constructor: "<<endl;
    this->name=obj.name;
    this->branch=obj.branch;
    this->CGPA=obj.CGPA;
  }
};
int main()
{
    student s1("Pratham","CSE",9.975);
    s1.getinfo();
    cout<<endl<<endl;
    student s2(s1);
    s2.getinfo();

    return 0;
}