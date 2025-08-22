#include<iostream>
using namespace std;
template <class t>
void display(t x){
   cout<<x<<endl;
}
template <class t1,class t2>
void display(t1 x,t2 y){
    cout<<x<<endl;
    cout<<y<<endl;
}
void display(int x){
    cout<<"odinary function "<<x<<endl;
}
int main(){
 display(2,54.46);
 display(8.51);
    return 0;
}