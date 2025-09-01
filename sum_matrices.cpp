#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<endl;
    cout<<"---> Enter the no. of rows: ";
    cin>>n;
    cout<<"---> Enter the no. of columns: ";
    cin>>m;
    int a[n][m],b[n][m];
    cout<<"---> Enter the elements of matrix 1: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"=> The elements of matrix 1 are: "<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\t\t";
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"---> Enter the elements of matrix 2: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"=> The elements of matrix 2 are: "<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\t\t";
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int c[n][m];
    cout<<"=> The sum of two matrices is: "<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"\t\t";
        for(int j=0;j<m;j++)
        {
         c[i][j]=a[i][j]+b[i][j];  
         cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}