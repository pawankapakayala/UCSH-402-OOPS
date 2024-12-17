#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class element{
int a;//member variable declared(private)
string n;
public:	
	void set(){//member functions
		cout<<"Enter Atomic Number:";
		cin>>a;
		cout<<"Enter Element Name:";
		cin>>n;
	}
	void display(){//member functions
		cout<<"Atomic Number is:"<<a<<endl;
		cout<<"Element Name is:"<<n<<endl;
	}
};
int main()//return int type
{
	element e1,e2;
	e1.set();
	e2.set();
    e1.display();
	e2.display();
	return 0;
	/*string element;
	cout <<"Enter element name:";//prints "enter elements name to input element name"
	cin >> element;//inputs the name of the element
	int atmoic_no;
	cout <<"Enter atomic number:";//prints "enter atomic_no  to input atomic number"
	cin >> atmoic_no;//inputs the atomic number
	cout <<"Entered element is: "<<element<<"\n";
	cout <<"Entered atomic number is: "<<atmoic_no<<"\n";
	return 0;*/
}
