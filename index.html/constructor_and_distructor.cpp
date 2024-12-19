#include<iostream>
using namespace std;

 class employee
    {
        public:
        string name;
        int id;
        employee( string name,int id)
        {
            cout<<"the customer name"<<name<<id<<endl;
        }
       ~employee()
       {
        cout<<"it's a destructor call"<<name<<endl;
       }

       

    };
int main()
{
    employee emp("index",123);
    return 0;
}