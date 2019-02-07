/****************************************************
 *
 *  FileName:    /net/data/ftp/pub/class/170/ftp/cpp/maxTemplate.cpp
 *  Purpose:     Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
using namespace std;

//Make a template out of the prototype
template <typename T>
T myMax(T one, T two);

int main()
{
   int i_one = 3, i_two = 5;

   cout << "The max of " << i_one << " and " << i_two << " is "
	<< myMax(i_one, i_two) << endl ;

   //Test your template on float and string types
    
   return 0;
}


//Make a template out of this function. Don't forget the return type.
/**
int myMax(int one, int two)
{
   int bigger;
   if (one < two)
   {
      bigger = two;
   }
   else
   {
      bigger = one;
   }
   return bigger;
   system("pause");
}
**/

template <typename T>
T myMax(T one, T two)
{
   T bigger ; 
   bigger = (one>two)? one : two;
   return (bigger) ;
}
