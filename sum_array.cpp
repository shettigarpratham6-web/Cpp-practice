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
   int sum=0;
   cout<<"The sum of array elements is : ";
   for(int i=0;i<n;i++)
   {
       sum=sum+arr[i];
   }         
cout<<sum;



    return 0;
}