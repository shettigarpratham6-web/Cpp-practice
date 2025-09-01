#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no. of rows of the matrix: ";
    cin>>n;
    cout<<"Enter the no. of columns of the matrix: ";
    cin>>m;
    int a[n][m];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The elements of the matrix are: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]>mx)
            {
                mx=a[i][j];
            }
        }
    }
    cout<<"The maximum element of the matrix is: "<<mx;




    return 0;
}