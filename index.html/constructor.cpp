#include<iostream>
using namespace std;
class student
{

    public:
    
    student( int a)
    {
        
        int area=a*a;
        cout<<area<<endl;
    }
    student()
    {
        cout<<"this is the constructor"<<endl;
    }
    student(student &obj)
{
    cout<<"this is copy constructor"<<endl;
}


};
int main()
{
    student st;
    student st1(4);
    student st3();
    return 0;
}