#include<iostream>
using namespace std;
class A 
{
    public:
    int x;
    void setvalue(int j)
    {
        x=j;
    }
    friend A operator *(A a,int x1);
    void display()
    {
        cout<<x;
    }
};


A operator *(A b,int k)
{
    A c;
    c.x=b.x*k;
    return c;
}
int main()
{
    A y;
    y.setvalue(10);
    y.display();
    A ob;
    ob=y*3;
    
    ob.display();

    return 0;
}
