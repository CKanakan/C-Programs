//============================================================================
// Name        : Char.cpp
// Author      : Charles Kanakan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[]= "hello";//appends extra value the length of this array is six

	for(int i=0; i<sizeof(text); i++){
		cout << i << ": " << text[i]<< endl;
	}

	int k=0;

	while(true){

		if(text[k] == 0)
			break;

		cout << text[k] << flush;
		k++;
	}

	return 0;
}
