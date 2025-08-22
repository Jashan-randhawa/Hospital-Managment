#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream infile("example.txt");
    if(!infile.is_open()){
        cout<<"error occured..."<<endl;
        return 1;

    }
    string line;
    while(getline(infile,line)){
        cout<<"read file :"<<line<<endl;
    }
    infile.close();
    return 0;
}