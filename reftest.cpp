#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
int main()// In C++, main( )always has return type of int.
{
    int n=100;
    int *p = &n;
    int &m = *p; // m is bound to n
    cout << " n = " << n << " m = " << m << " *p = " << *p << endl;//cout prints the output stream of bits on screen
    int k=5;
    p = &k; //pointer value is changed
    k = 200; // is there change in m value?
    cout << " n = " << n << " m = " << m << " *p = " << *p << endl;//cout prints the output stream of bits on screen
}