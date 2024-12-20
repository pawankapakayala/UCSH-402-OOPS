#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class languages
{
    string language;
    double speakers;
    string country;
    public:
        void set(){//member function
            cout<<"Enter language:";
            cin>>language;
            cout<<"Country:";
            cin>>country;
            cout<<"No. of speakers:";
            cin>>speakers;
        }
        void display(){//member functions
        cout<<endl;
		cout<<"Language :"<<language<<endl;
		cout<<"Country:"<<country<<endl;
        cout<<"Speakers"<<speakers<<endl;
	}
};
int main(){
    languages l1, l2, l3;

    //User input
    cout<<"Enter language 1 details:"<<endl;
    l1.set();
    cout<<"Enter language 2 details:"<<endl;
    l2.set();
    cout<<"Enter language 3 details:"<<endl;
    l3.set();

    l1.display();
    l2.display();
    l3.display();

    return 0;
};

