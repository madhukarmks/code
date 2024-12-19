#include<bits/stdc++.h>
using namespace std;

int binary_searching(int arr[],int size,int key)
{

int s=0;
int e=size;
   
   while (s<=e)
   {
       int mid=(s+e)/2;
 
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            mid-1;
        }
             
   }
    return -1;
   

}



int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    cout<<binary_searching(arr,size,key);
    return 0;
}