#include<iostream>
using namespace std;
template <class t1=int,class t2=float>//the template parameter can be set a default value
class sum{
    public:
    float x;
    sum(t1 a,t2 b){
        x=a+b;
        cout<<"sum of two number is "<<x<<endl;
    }
};
int main(){
    sum <int,float>obj(3,3.51);
    sum<> obj1(5,25.544);
    return 0;
}