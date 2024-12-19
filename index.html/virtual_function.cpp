#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
   
   virtual void data()
   {
     cout<<"this is the data of the value"<<endl;
   }
   void show()
   {
    cout<<"this is the actual value of the shown"<<endl;
   }

};

class derived :public Base
{
    void data()
    {
        cout<<"this is the value that we ask"<<endl;
    }
    void show()
    {
        cout<<"this is the best value"<<endl;
    }
};


int main()
{
    Base* bpter;
    derived d;
   bpter = &d;
   bpter ->data();
   bpter ->show();
   bpter ->data();
   bpter ->data();
   

}
