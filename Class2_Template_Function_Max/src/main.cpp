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

template <typename S>
S printOut(S output);

template <typename A>
A square(A input);

int main()
{
   double d = 3.3456;
   char s = 'a' ;
   int i_one = 3, i_two = 5;
   float f = 0.000123;

   cout << "The max of " << i_one << " and " << i_two << "  is " << myMax(i_one, i_two) << endl ;

   printOut(s) ;
   printOut(d) ;
   printOut(i_one) ;

   cout << " The Square of " << d << " Is " << square(d) << endl ;
   cout << " The Square of " << i_two << " Is " << square(i_two) << endl;
   cout << " The Square of " << s << " Is " << square(s) << endl;
   cout << " The Square of " << f << " Is " << square(f) << endl;


   //Test your template on float and string types
    
   return 0;
}




template <typename T>
T myMax(T one, T two)
{
   T bigger ; 
   bigger = (one>two)? one : two;
   return (bigger) ;
}

template <typename S>
S printOut(S output)
{
   cout << "The Output Is " << output << endl ;
   return output ;
}

template <typename A>
A square(A input)
{
   A result ; 
   result = input * input ;
   return result;
}