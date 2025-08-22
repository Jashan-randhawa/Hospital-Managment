#include<iostream>
using namespace std;
int main(){
   /* cout<<"please enter a input char"<<endl;
    char c=cin.get();
    cout<<"output = "<<c<<endl;
    cout.put(c);
    cout.put('o');
    program for entering a single character*/
    cout<<"enter the string"<<endl;
    char c[10];
    cin.getline(c,10);
    cout<<"ouput ="<<c<<endl;
    cout.write(c,8);
    return 0;

}