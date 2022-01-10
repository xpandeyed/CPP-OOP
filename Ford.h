#include "Car.h"
using namespace std;

//When parent also has a parent, the inheritance is called multi-level inheritance

class Ford:public Car{
public:
	Ford(){
		cout << "Default constructor of Ford called." << endl;
	}
	Ford(string color):Car(color){
		cout << "Parameterized constructor of Ford called." << endl;
	}
};