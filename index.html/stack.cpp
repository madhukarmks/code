#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack
{
    int* arr;
    int top;

    public:
       inline Stack()
    {
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"the stack in the form of overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"their is no element to delete in stack";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"their is no element to delete in stack";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
       return top==-1;
    }


};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(6);
    st.push(8);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

}