#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i-1]<arr[i]>arr[i+1])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}