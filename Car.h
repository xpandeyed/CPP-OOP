#ifndef CAR
#define CAR

#include "Vehicle.h"
using namespace std;

//when parent has only one child and child has only one parent,
//the inheritance is called single inhertance

class Car: virtual public Vehicle{
public:
	int seats;
	int gears;
	Car(){
		//since this constructor has no initialization list,
		//this will call the default constructor of the parent
		cout << "Default constructor of Car class called" << endl;
	}
	Car(string color):Vehicle(color){
		cout << "Color of car is: " << color << endl;
	}
	void print(){
		cout << "Print from Car called." << endl;
	}
	//if we want to initialize the derived properties,
	//we need to initialize the constructors for the parent and all ancestors

	//child can call parent's constructors but not ancestor's constructors
};

#endif