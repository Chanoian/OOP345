#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

template <typename T1>
void demoTemplate(Matrix<T1>& M, T1 array1[][MAXCOLS], T1 array2[][MAXCOLS]);

int main()
{
    string str1[MAXROWS][MAXCOLS] = 
       { 
	  {"Congra", "y", "ar"},
	  {"alm", "don", "La"}
       };
    string str2[MAXROWS][MAXCOLS] = 
       { 
	  {"tulations", "ou", "e"},
	  {"ost", "e    the", "b!"}
       };
    int num1[MAXROWS][MAXCOLS] = 
       {
	  {1,2,3},
	  {4,5,6}
       };
    int num2[MAXROWS][MAXCOLS] = 
       {
	  {6,5,4},
	  {3,2,1}
       };

   double double1[MAXROWS][MAXCOLS] = 
       {
	  {6.6665,5.66636,4.6666},
	  {3.4444,2.22222,1.1111}
       };

   double double2[MAXROWS][MAXCOLS] = 
       {
	  {6.22266,5.9999999,4.6666},
	  {3.11114,2.9992222,1.1111}
       };


    Matrix<string> stringMatrix;
    Matrix<int> intMatrix;
    Matrix<double> doubleMatrix ;

    cout << "\nDemonstrating with string matrix:" << endl;
    demoTemplate(stringMatrix, str1, str2);

    cout << "\nDemonstrating with int matrix:" << endl;
    demoTemplate(intMatrix, num1, num2);

    cout << "\nDemonstrating with double matrix:" << endl;
    demoTemplate(doubleMatrix, double1, double2);


    cout << "\n" << endl;
    system("pause");
    return 0;                
}


template <typename T1>
void demoTemplate(Matrix<T1>& M, T1 array1[][MAXCOLS], T1 array2[][MAXCOLS])
{
    M.setMatrix(array1);
    cout << "\nMatrix set to first array" << endl;
    M.printMatrix();

    M.addMatrix(array2);
    cout << "\nMatrix incremented by second array" << endl; 
    M.printMatrix();
}