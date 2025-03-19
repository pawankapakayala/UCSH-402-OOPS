#include <iostream>
using namespace std;//using the standard namespace
class Patient {//creating a class called patient
public:
void getdata() {//function to get the data
string name;//declaring a string variable called name
string disease;//declaring a string variable called disease
cout << "Enter name: ";//asking the user to enter the name
cin >> name;//inputting the name
cout << "Enter disease: ";//asking the user to enter the disease
cin >> disease;//inputting the disease
};
};

class in_patient : public Patient {//creating a class called in_patient which is a child class of the parent class Patient
public:
float room_rent;  // member variable
void roomrent(float f){
    room_rent = f;
};
void putdata() {//function to display the data
    cout<<"Room rent is: "<<room_rent<<endl;
};
};

class out_patient : public Patient {//creating a class called out_patient which is a child class of the parent class Patient
public:
float opd_charge;  // member variable
void opd_charges(float f){
    opd_charge = f;
};

void putdata() {//function to display the data
    cout<<"OPD charges are: "<<opd_charge<<endl;
};
};

int main() {//main function
    Patient p;//creating an object of the class patient
    in_patient ip;//creating an object of the class in_patient
    out_patient op;//creating an object of the class out_patient
    p.getdata();//calling the getdata function
    ip.roomrent(5000);
    op.opd_charges(2500);
    ip.putdata();//calling the putdata function
    op.putdata();//calling the putdata function
    return 0;//returning 0
}
