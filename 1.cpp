#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//all standard libraries of c++ are wrapped in std
int main()// In C++, main( )always has return type of int.
{
	int a=6;
	int b=0;
	while(a<10)
	{
		a=a/12+1;
		a+=b;
	}
	std::cout<<a;//cout is an object which prints the stream of bits on the screen
	//the standard name space is defined 
	return 0;
}
