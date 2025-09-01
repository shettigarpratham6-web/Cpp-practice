#include<iostream>
#include<climits>
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


    int maximum = INT_MIN;
    int second_maximum = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i] > maximum)
        {
            second_maximum = maximum;
            maximum = a[i];
        }
        else if(a[i] > second_maximum && a[i] != maximum)
        {
            second_maximum = a[i];
        }
    }

    if(second_maximum == INT_MIN)
        cout<<"No second maximum exists (all elements are equal)"<<endl;
    else
        cout<<"Second maximum element is: "<<second_maximum<<endl;

    return 0;
}
