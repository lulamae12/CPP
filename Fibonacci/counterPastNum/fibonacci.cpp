// Fibo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <cmath>;
using namespace std;
int main()
{
	int numToReach;
	cout << "Please enter the number you wnat the Fibonacci sequenc to max out at: ";
	cin >> numToReach;
	int fib1 = 0, fib2 = 1, fib3 = 1;

	cout << "Fibonacci Series: " << endl << fib1 << " " << fib2 << " ";
	while (fib1 + fib2 < numToReach)
	{
		fib3 = fib1 + fib2;// add 1 and 2
		fib1 = fib2;// 1 equals 2
		fib2 = fib3;// and 2 equals 3
		cout << fib3 << " ";
	}
	cout << endl;
	system("pause");
	return 0;

}

