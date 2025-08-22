#include<iostream>
using namespace std;

class complex{
public :
 float x;
 float y;
 complex(){

 }
 complex(float a,float b){
    x=a;
    y=b;
 }
 complex operator+(complex);
 void display(void);
};
complex complex::operator+(complex c){
complex temp;
temp.x = x + c.x;
temp.y= y + c.y;
return temp;
}
void complex :: display(void){
    cout<< x << " + j"<< y <<endl;
}
int main(){
    complex c1,c2,c3;
    c1 = complex(2.5,3.4);
    c2 = complex(1.8,5.4);
    c3 = c1+c2;

    cout<<" c1:";
    c1.display();
    cout<<" c2:";
    c2.display();
    cout<<" c3:";
    c3.display();
    return 0;
}