#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//all standard libraries of c++ are wrapped in std
int funcp()
{
	static int x=1;
	x++;
	return x;
}
int main()// In C++, main( )always has return type of int.
{
	int x,y;
	x=funcp();
	y=funcp()+x;
	cout<<(x+y)<<endl;//cout prints the output stream of bits on screen
	return 0;
}

