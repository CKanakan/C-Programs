//============================================================================
// Name        : Reversing.cpp
// Author      : Charles Kanakan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[]= "LOISING THE GAME TIME";

	int nChars = sizeof(text)-1;

	char *pStart = text;

	char *pEnd= text + nChars - 1;

	while (pStart < pEnd){

		char save = *pStart; // saving the pointer to the first character "h"
		*pStart = *pEnd;// Make the last character the first character
		*pEnd = save;// now the first letter is the last letter


		pStart++;
		pEnd--;


	}

	cout << text << endl;



	return 0;
}
