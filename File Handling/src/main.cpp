#include <iostream>
#include <fstream>

using namespace std ;
int main() {

    char text[15] = "This is a test";
    ofstream outfile("my_file.txt");
    outfile.write((char*) text, sizeof(text));
    outfile.close();
    
    char dummy[45];

    ifstream infile("my_file.txt");
    infile.getline(dummy, sizeof(dummy));
    infile.close();

    cout <<dummy << endl ;
}