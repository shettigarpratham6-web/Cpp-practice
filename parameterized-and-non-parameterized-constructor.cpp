#include<iostream>
#include<string>
using namespace std;
class student{
  public:
      string name;
   student(){
       cout<<"Non-parameterized constructor"<<endl;
   }
   student(string name){
    this->name=name;
    cout<<"parameterized constructor"<<endl;

   }

};
int main()
{
  student s1;
  student s2("HI");
  

return 0;
}