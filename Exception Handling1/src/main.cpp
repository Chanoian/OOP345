#include <iostream>
#include <exception>

using namespace std ;

// Starter Code
class subRange
{
public:
    subRange(int, int);
    int getValue();

private:
    int lower, upper;
};

subRange::subRange(int low, int high)
{
    lower = low;
    upper = high;
}

int subRange::getValue()
{
    int v;
    cout << "Enter value [ " << lower << ", " << upper << " ]: ";
    cin >> v;   
    if(v<lower || v>upper)
    {
        throw "The Inserted Number is not in the range";
    }
    else if (v==lower || v==upper)
    {
        throw v ;
    }
    return v;
}

void main()
{ 
    subRange x(1, 10);
    try{
        cout << x.getValue() << endl;
    }catch (const char* msg){
        cout << msg << endl;
    }  
    catch (int v){
        cout << v << endl;
    } 
}
