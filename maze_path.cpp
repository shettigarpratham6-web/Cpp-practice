#include<iostream>
using namespace std;
int maze(int cr,int cc,int er,int ec)
{
    int rightway=0;
    int downway=0;
  if(cr==er and cc==ec)  return 1;
  else if(cr==er) 
         rightway+=maze(cr,cc+1,er,ec);
  else if(cc==ec)
         downway+=maze(cr+1,cc,er,ec);
  else if(cr<er and cc<ec)
  {
    rightway+=maze(cr,cc+1,er,ec);
  downway+=maze(cr+1,cc,er,ec);

  }   
  int totalway= rightway+downway;
  return totalway;          

}
int main()
{
   int n,m;
   cout<<"Enter the no. of rows: ";
   cin>>n;
   cout<<"Enter the no. of columns: ";
   cin>>m;
   cout<<maze(1,1,n,m)<<endl;

    return 0;
}