#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,d,e,n;
    cout<<"enter the value of five digit number"<<endl;
    cin>>num;
   a=num%10;
   b=(num/10)%10;
   c=(num/100)%10;
   d=(num/1000)%10;
   e=(num/10000)%10;

   n= a*10000+b*1000+c*100+d*10+e*1;
   cout<<"the reverse value is "<<n<<endl;
   if(n==num)
   {
    cout<<"the value which is obtained that is equal";
   }
   else{
    cout<<"not same";
   }
}