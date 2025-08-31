#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements : ";
  for(int i=0;i<n;i++)
       cin>>arr[i];
  cout<<"The array elements are: ";
   for(int i=0;i<n;i++)
       cout<<arr[i]<<"  ";
   int prod=1;
   cout<<"The Product of array elements is : ";
   for(int i=0;i<n;i++)
   {
       prod=prod*arr[i];
   }         
cout<<prod;



    return 0;
}