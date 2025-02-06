#include<iostream>//io stram is a library function that is used to take input and output
using namespace std;//std has the standard libraries of c++
int Capital=50;//global variable
class companyX{//class is defined
	
	int Capital=50;//local variable
	int RAmount;
	public:
	void Require(int x){//function is defined
		RAmount = x;	
	}	
	int Allocate(){//function is defined
		Capital=Capital-RAmount;
		return Capital;
	}
		
};
int main(){
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