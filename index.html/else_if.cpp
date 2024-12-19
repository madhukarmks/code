#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    int s= 'male';
    cin>>s;
    int g='female';
    cin>>g;
    while(s=='male')
    {
       
     
        if(age>=90)
        {
            cout<<"pension is 4000"<<endl;
        }
        else if(age>=60)
        {
            cout<<"pension is 6000"<<endl;
        }
        else if(age<60)
        {
            cout<<"pension is 0"<<endl;
        }
        return;
    }
    while (g=='female')
    {
           if(age>=90)
        {
            cout<<"pension is 3000"<<endl;
        }
        else if(age>=60)
        {
            cout<<"pension is 5000"<<endl;
        }
        else if(age<60)
        {
            cout<<"pension is 0"<<endl;
        }
        return;
    }
    
    
return 0;
}