#include <iostream>
using namespace std;//all standard libraries of c++ are wrapped in std
int main()
{
	float sum=0.0, j=1.0, i=2.0;
	while(i/j > 0.0625){
		j=j+j;
		sum=sum+i/j;
		std::cout<<sum<<endl;//cout is an object to print the stream of bits on screen
		//the standard name space is defined 

	}
	return 0;
}
