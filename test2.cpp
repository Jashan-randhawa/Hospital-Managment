#include<iostream>
using namespace std;
class A
{
        int a, b;
     public:
        void accept()
        {
                cout<<"enter a and b";
                cin>>a;
                cin>>b;
        }
       
 friend void operator--(A &x); 
        
        
        void display()
        {
                cout<<"\n A : "<<a;
                cout<<"\n B : "<<b;
        }
};
 void operator--(A &x)
        {
                x.a--;
                x.b--;
        }
int main()
{
        A id;
        id.accept();
        --id;
        
        id.display();
            return 0;
}
