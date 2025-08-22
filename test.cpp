#include<iostream>
using namespace std;
class base{
    public :
    int a;
    virtual void get(int x){
        a=x;
    }
    virtual void show(){
        cout <<"a = "<< a ;

    }
};
class derived :public base{
    public :
    int b;
    void get(int y){
        b=y;
    }
    void show(){
        cout<<"b ="<<b;
    }
};
int main(){
    base*ptr;
    base obj;
    ptr=&obj;
    ptr->get(2);
    ptr->show();
    derived obj1;
    ptr=&obj1;
    ptr->get(2);
    ptr->show();
    return 0;
}