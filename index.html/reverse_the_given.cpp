#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
     
    cout<<"enter the value of integer"<<endl;
    cin>>n;
    while (n!=0)
    {
        m=n%10;
    n=n/10;
    cout<<m;
    }
    cout<<endl;
    if(m==n)
    {
        cout<<"the value enter the same as the value enter";
    }
    else{
        cout<<"notsame";
    }
    
}
