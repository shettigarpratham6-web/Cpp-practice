#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<str<<endl;
    int count=0,count2=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
           count+=1;
        }
           else if(str[i]==' '){
            continue;
              
           }
        else{
           count2+=1;
        }
    }
   cout<<"The no of vowels in this string is: "<<count<<endl;
   cout<<"The no of consonanats in this string is: "<<count2<<endl;

    return 0;
}