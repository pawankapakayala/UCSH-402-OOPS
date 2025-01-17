#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;
int foo(int x, int y, int q)
{
	if ((x <=0) && (y<=0))
	return q;
	if(x <=0)
	return foo(x, y-q, q);
	if(y<=0)
	return foo(x-q,y,q);
	return foo(x,y-q,q)+foo(x-q,y,q);
}
int main()// In C++, main( )always has return type of int.
{
	int r= foo(15,15,10);
	cout<<r;//cout prints the output stream of bits on screen
	return 0;
}
