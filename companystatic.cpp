#include<iostream>//iostream is a library function that is used to take input and output
using namespace std;//std has the standard libraries of c++
class companyX{//class is defined
	
	static int Capital;//global variables are equivalent to static variables
	//static variables are shared by all objects of the class
	//satatic variables are defined in the class but declared outside the class
	//a class variable of type static is defined 
	int RAmount;
	public:
	void Require(int x){//function is defined
		RAmount = x;	
	}	
	int Allocate(){
		Capital=Capital-RAmount;//static variables are accessed using the class name
		return Capital;
	}
		
};
int companyX:: Capital = 50;//static variables are defined outside the class
int main(){//main function is defined
	companyX A,B,C;//objects are created
	A.Require(15);
	int BalA=A.Allocate();//function is called
	B.Require(10);
	int BalB=B.Allocate();//function is called
	C.Require(9);
	int BalC=C.Allocate();//function is called
	cout<<BalA<<endl;
	cout<<BalB<<endl;
	cout<<BalC<<endl;
	return 0;
}