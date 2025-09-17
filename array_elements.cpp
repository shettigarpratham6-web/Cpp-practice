#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements into the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}