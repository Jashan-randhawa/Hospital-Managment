#include<iostream>
using namespace std;
template <class t>
class show{
    public :
    void display(t x);
};
template <class t>
void show <t>::display(t x){
    cout<<x<<endl;
}
int main(){
    show <int>obj;
    obj.display(5);
    return 0;
}