#include<iostream>
using namespace std;

class a{
 public:
 void display(void){
    cout<<"this is a base function";
 }
};
class b : public a{
public:
void display(){
    cout<<"this is overriding the base function";
}
};
int main(){
    b obj;
    obj.display();
    cout<<endl;
    obj.a::display();
    cout<<endl;
    obj.b::display();
    return 0;
}