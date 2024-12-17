#include <iostream>
using namespace std;//all standard libraries of c++ are wrapped in std
int main()
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
