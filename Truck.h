#include "Vehicle.h"
using namespace std;
class Truck:virtual public Vehicle{
public:
	Truck(){
		cout << "Defaut constructor of Truck called." << endl;
	}

};