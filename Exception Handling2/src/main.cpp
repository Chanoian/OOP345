#include <iostream>
#include <exception>

class array
{
public:
    array(int = 1);
    // other functions not needed for this assignment
private:
    int *elts;
    int count;
};

array::array(int sz)
{
    count = sz;
    elts = new int[count];
}
void main()
{

    try{
        array *ptr[10];
        for (int i = 0; i < 20; i++)
        {
            ptr[i] = new array(100000000L);
            if (i > 9)
                throw i;
        }
    }
    catch(int i){
        std::cout <<"Bad Allocation" << std::endl ;
    }

}