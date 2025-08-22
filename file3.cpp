#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("example.txt");

    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1; // Return an error code
    }

    string line;
    while (getline(file, line)) {
        // Update the data as needed
        // For example, append " [Updated]" to each line
        line += " [Updated]";

        // Write the updated line back to the file
        file << line << endl;
    }

    file.close();

    return 0; // Return success
}