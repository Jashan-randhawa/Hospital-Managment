#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    int c;
    void display(void){
        cout<<c<<endl;        
    }
    void sum(int x,int y){
        a=x+y;
        cout<<a<<endl;
    }
    void mul(int x,int y);
};
void test::mul(int x,int y){
    b=x*y;
    cout<<b<<endl;
}
int main(){
    test obj;
    int a=3,b=5;
    obj.sum(a,b);
    obj.mul(a,b);
    obj.c=30;
    obj.display();
    return 0;
}