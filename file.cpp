#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outfile("example.txt", ios::out);
    if (!outfile.is_open())
    {
        cout << "file opening failed";
        return 1;
    }
    outfile << "this is the first line" << endl;
    outfile << "this is the first line" << endl;
    outfile << "this is the first line" << endl;
    outfile.close();
    return 0;
}