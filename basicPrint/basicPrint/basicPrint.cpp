// basicPrint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string name;
	int age;
	cout << "Hello there, what is your name?" << endl; // << is an insertion seperator
	cin >> name;
	cout << "how old are you," << name + "?" << endl;
	cin >> age;
	cout << name + " is " << age << " years old." << endl;
	
}