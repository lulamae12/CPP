// counter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>// must be used when using strings
using namespace std;

int main()
{
	int numToGetTo;
	int presses = 0;
	string userInput;
	cout << "type the number you wnat to count to :";
	cin >> numToGetTo;
	cout << "Press enter to increase the counter. type done to quit." << endl;
	while (presses != numToGetTo) {   
		
		cout << "Counter: " << presses << endl;
		presses++;
		
		
	}
	return 0;
}

