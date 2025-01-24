#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
int main()// In C++, main( )always has return type of int.
{
    int a=1, b=2, c=3;
    int &z = a; //variable z becomes alias of a
    cout <<"a="<<a<<"b="<<b<<"c="<<c<<"z="<<z<<endl;//cout prints the output stream of bits on screen
    z=b; //changes value of a to the value of b
    cout <<"a="<<a<<"b="<<b<<"c="<<c<<"z="<<z<<endl;//cout prints the output stream of bits on screen
    z=c; //changes value of b to the value of c
    cout <<"a="<<a<<"b="<<b<<"c="<<c<<"z="<<z<<endl;//cout prints the output stream of bits on screen
    cout <<"&a="<<&a<<"&b="<<&b<<"&c="<<&c<<"&z="<<&z<<endl;//cout prints the output stream of bits on screen
}