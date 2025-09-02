#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"Enter the no. of columns: ";
    cin>>m;
    if(n<3 or m<3)
    {
        cout<<"The matrix is not possible to give the rectangle sum from (1,1) to (2,2)"<<endl;
    }
    else{
    int a[n][m];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
        cout<<endl;
    cout<<"CONFIRMATION:"<<endl<<endl;
    cout<<"The elements of the matrix are: "<<endl<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
     for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
           sum=sum+a[i][j]; 
        }

    }
        cout<<endl;
    cout<<"The sum of the rectangle from(1,1) to (2,2) is= "<<sum;
    }


    return 0;
}