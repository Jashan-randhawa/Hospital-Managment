#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x=10;
    cout<<setw(20);
    cout<<setfill('#')<<x<<endl;
    float y=1.59247896;
    cout<<setprecision(5)<<y;
    return 0;
}