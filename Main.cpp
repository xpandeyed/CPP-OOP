#include <iostream>
#include "Ford.h"
#include "TeachingAssistant.h"
#include "Bus.h"

using namespace std;

int main()
{

	// Car c1;
	// Car c2("Black");
	// Ford mustang("Blue");
	// cout << endl << endl;
	// TeachingAssistant ta1;

	// //since both the parents of teching assitant class have print and the class itself doest not have print fucntion
	// //so the below line creates ambuiguity
	// //ta1.print();
	// //so we need to explicitly tell of which parent the funcion is to be called
	// ta1.Student::print();
	// cout << endl << endl;

	Bus b1;
	cout << "Calling default print" << endl;
	b1.print();
	cout << "Calling Car's print" << endl;
	b1.Car::print();
	cout << "Calling Truck's print" << endl;
	b1.Truck::print();
	//Truck does not have a print function so compiler will check for print in Truck's parent
	//If parent has public print function then it will be called else print will be checked in parent's parent
	
	//When Car and Truck are not inherited with virtual keyword:
	//Bus has two copies of vehicle 
	//When we create bus object constructor's call
	//Vehicle -> Car -> Vehicle -> Truck -> Bus

	//When Car and Truck are inherited with virtual keyword:
	//To give direct access of Vehicle to Bus we make Car's and truck's inhertance virtual
	//When we create bus object constructor's call
	//Vehicle -> Car -> Truck -> Bus
	//Vehicle is called once because Bus has direct access to Vehicle

	//If Children want to call parent's parameterized constructor, explicit mention is required
	//The implicit call from a child is done for default constructor of the parent

	//If virtual keyword is not there for Car and Truck:
	//Bus cannot call Vehicle's constructor, default or private both

	//If virtual keyword is used for Car and Truck
	//Bus can directly call the Vehicle's constructor both default and paramterized
	//If Bus is calling Vehicle's parameterized constructor directly, Car and Truck do not need to have paramterized constructor
	cout << endl << endl << "Operating on B2" << endl;
	Bus b2("Red");

	return 0;
}


//4 Pillars of OOP
//1. Abstraction
//2. Encapsulation
//3. Inheritance
//4. Polymorphism