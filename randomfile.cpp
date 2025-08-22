#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("example.txt");
    cout<<file.tellp()<<endl;
    file<<"hello world";
    cout<<file.tellp()<<endl;
    file.seekp(-5,ios::end);
    file<<"jashan";
    ifstream file1("example.txt");
    cout<<file1.tellg()<<endl;
    file1.seekg(0,ios::beg);
    char c;
    while(!file1.eof()){
    file1.get(c);
    if(file1.eof()){
        break;
    }
    cout<<c;

    }
return 0;
}