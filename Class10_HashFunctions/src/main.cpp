#include <iostream>
#include <string>

using namespace std;
string input;


int hash_function(const string input)
{
    int value = 0;
    for (int i = 0; i < input.length(); i++)
        value += input[i];
    
    int result = value % 5;
    return result;
}

int main()
{
    cout<< hash_function("a") << endl ;
    return 0;
}



