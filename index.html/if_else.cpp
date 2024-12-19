#include<iostream>
using namespace std;
int main()
{
    int n,  mount=0,count=0;
    cin>>n; 
    int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  
  
    for ( int i = 0; i < n; i++)
    {
        if(arr[i]>10&&arr[i]<50)
        {
            count++;
        }
        else{
            mount++;
        }
        
    }
    cout<<mount<<endl;
    cout<<count;
}