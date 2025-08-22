#include<iostream>
using namespace std;
class base{
    public:
    int a;
    void getdata(int x){
        a=x;
    }
    void show(){
        cout<<"a ="<<a;
    }
};
class derived : public base{
    public:
    int b;
    void getdata(int y){
        b=y;
    }
    void show(){
        cout<<"b = "<<b;
    }
};
int main(){
    base*bptr = new derived();
    derived*dptr=static_cast<derived*>(bptr);
    dptr->getdata(3);
    dptr->show();
    delete dptr;
    return 0;
}