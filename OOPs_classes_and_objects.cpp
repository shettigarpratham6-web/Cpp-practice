#include<iostream>
#include<string>
using namespace std;
class student{
  private:
         int USN_last_3_number;
  public:
        string name;
        int age;
        string branch;

      void change(string b)
      {
        branch=b;
        cout<<branch<<endl;
      }  


};
int main()
{
  student s1,s2;
   s1.branch="CSE";
   s2.branch="ISE";
   s1.change("ECE");
   s2.change("ME");


    return 0;
}