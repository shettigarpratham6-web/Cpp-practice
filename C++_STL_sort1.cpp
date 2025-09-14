#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v;
    v={4,5,1,3,9,2};
    cout<<"before sort: "<<endl;
    for(int val:v){
        cout<<val<<endl;
    }
    cout<<"after sort: "<<endl;
    sort(v.begin(),v.end());
    for(int val: v){
        cout<<val<<endl;
    }
    cout<<endl;
    return 0;
}