#include<bits/stdc++.h>
using namespace std;

int linea_searching(int arr[],int target,int n)
{
        for (int i = 0; i < n; i++)
       {
           if(arr[i]==target)
     {
         return i;
     }
      
}
  return -1;
}

int main()
{
    int n;
    cin>>n;
       int arr[n];
    for (int  i = 0; i < n; i++)
    {
          cin>>arr[i];
    }
   int target =50;
    cout<<"we are trying to searching the value that is 50: "<<linea_searching(arr,target,n);
    return 0;
}