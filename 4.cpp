#include <iostream>
using namespace std;//all standard libraries of c++ are wrapped in std
int main()//return int type
{
	int A=9, B=3;
	while(A!=B)
	{
		if(A>B)
		A-=B;
		else
		B-=A;
	}
	std::cout<<A;//cout prints the output stream of bits on screen
	//the standard name space is defined 
	return 0;
}

