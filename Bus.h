#include "Car.h"
#include "Truck.h"

using namespace std;

class Bus: public Car, public Truck{
public:
	Bus(){
		cout << "Default constructor of Bus called." << endl;
	}
	void print(){
		cout << "Print from bus called" << endl;
	}
	Bus(string color):Vehicle(color){
		cout << "Bus has color: " << color << endl;
	}
};