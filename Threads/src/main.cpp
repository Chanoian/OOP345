#include <iostream>
#include <thread>
#include <mutex>


using namespace std;
mutex mtx ;

void print_char(char n, int i)
{
    mtx.lock();
    for (int j=0 ; j<i; j++)
    {
        cout << n << endl;
    }
    mtx.unlock();
}

int main()
{
    thread th1(print_char,'a', 100);
    thread th2(print_char,'e', 100);
    th1.join();
    th2.join();
    return 0;
}
