#ifndef VEHICLE
#define VEHICLE

#include <iostream>
using namespace std;
class Vehicle{
private:
	int maxSpeed;
protected:
	int numTyres;
public:
	string color;

	void description(){
		cout << "The color of the vehicle is: " << color << endl;
	}

	Vehicle(){
		cout << "Default constructor of vehicle called." << endl;
	}
	Vehicle(int speedMax){
		cout << "Parameterized constructor called." << endl;
		maxSpeed = speedMax;
	}
	Vehicle(string color){
		cout << "Color of vehicle is: " << color << endl;
		color = color ;
	}
	~Vehicle(){
		cout << "Vehicle's destructor called." << endl;
	}
	void print(){
		cout << "Print from Vehicle called" << endl;
	}
};

#endif
//Whenever a parameterized constructor is created, the default constructor is not available
//So whenever you create a parameterized constructor, you need to create a default constructor,
//if you want to call the default constructor