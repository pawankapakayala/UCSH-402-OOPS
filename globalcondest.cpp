#include <iostream>
using namespace std;
class myclass {
public:
int who;
myclass(int id);
~myclass(); // destructor
} glob_ob1(1);
myclass::myclass(int id)
{
cout << "Initializing " << id << "\n";
who = id;
}
myclass::~myclass()
{
cout << "Destructing " << who << "\n";
}
void fun()
{
myclass func_ob2(2);
cout<< "Here is a function";
}
int main()
{
fun();
myclass local_ob1(3);
cout << "This will not be first line displayed.\n";
myclass local_ob2(4);
return 0;
}
//has a relationship