#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"Enter the no. of columns: ";
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
    cout<<endl;
    cout<<"The transpose of the matrix: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}