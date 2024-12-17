#include <iostream>
using namespace std;//all standard libraries of c++ are wrapped in std
int main()//returns int type
{
	int i, j, count;
	count=0;
	i=0;
	for (j=-3; j<=3; j++)
	{
		if((j>=0)&&(i++))
		count = count+j;
	}
	count=count+i;
	std::cout<<count<<endl;//cout is an object to print the stream of bits on screen
	//the standard name space is defined 
	return 0;
}
