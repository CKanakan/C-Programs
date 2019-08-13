//============================================================================
// Name        : Encapsulation.cpp
// Author      : Charles Kanakan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Frog{
private:
	string name;
	string getName(){return name;}
public:
	Frog(string name): name(name){}

	void info(){cout << "My name is: " << getName() << endl;}
};

int main() {

	Frog frog("Freddy");

	frog.info();

	return 0;
}
