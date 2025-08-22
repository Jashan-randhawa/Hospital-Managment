#include<iostream>
using namespace std;
class base{
    public :
    int x;
   void sum(int a,int b){
        x=a+b;
        cout<<"the sum is"<<x;
    }

};
class derived:public base{
    public:
    int y;
    void product(int a, int b){
        y=a*b;
        cout<<"the product is"<<y;
    }
};
int main(){
    derived obj;
    obj.product(2,3);
    base bobj= obj;
    bobj.sum(2,3);
    bobj.x=2;
    return 0;


}