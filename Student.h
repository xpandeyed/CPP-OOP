#include <iostream>
using namespace std;

class Student{
public:
	Student(){
		cout << "Defaut constructor of Student called." << endl;
	}

	void print(){
		cout << "Student" << endl;
	}

};