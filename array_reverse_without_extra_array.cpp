#include<iostream>
using namespace std;
int main()
{
  int n;
    cout<<"Enter the size of an array: ";
      cin>>n;
  int a[n];
    cout<<"Enter the array elements: ";
      for(int i=0;i<n;i++)
      { 
        cin>>a[i];
      }
    cout<<"The array elements are: ";
    for(int i=0;i<n;i++)
      { 
        cout<<a[i]<<" ";
      }
      cout<<endl;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }  
    cout<<"after reversing"<<endl;
    for(int i=0;i<n;i++)
      { 
        cout<<a[i]<<" ";
      }

    


    return 0;
}