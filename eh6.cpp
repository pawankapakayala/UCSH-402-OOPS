// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;//myex is called a global object

int main () {
  try
  {
    throw myex;
  }
  catch (exception &e)
  {
    cout << e.what() << '\n';//what() is a virtual function in the exception class
  }
  return 0;
}
