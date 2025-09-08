#include<iostream>
#include<string>
using namespace std;
class Teacher{
 public: 
  string name;
  int age;
  double salary;
};
class student : public Teacher{
  public:
     int rollno;
};
int main()
{
  student s1;
  s1.name="abc";
  s1.age=20;
  s1.rollno=145;
  cout<<"student name: "<<s1.name<<endl;
  cout<<"student age: "<<s1.age<<endl;
  cout<<"student rollno: "<<s1.rollno<<endl;

  return 0;
}