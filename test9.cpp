#include<iostream>
using namespace std;
template <class T>
class sum{
public:
T x;
sum(T a,T b){
    x=a+b;
    cout<<"sum of two number is ="<< x <<endl;
}
};
int main(){
    sum <int>obj(1,2);
    sum <float>obj1(4.516,50.54);
    sum <double>obj2(5.51,5.516);
    return 0;
}