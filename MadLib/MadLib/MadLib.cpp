// MadLib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>// allows sleep and stuff
#include <string>//like import
using namespace std;

int main()
{


	string name;
	cout << "enter a name:" << endl;
	cin >> name;
	
	string noun;
	cout << "enter a noun:" << endl;
	cin >> noun;
	
	string place;
	cout << "enter a place:" << endl;
	cin >> place;
	
	string verb;
	cout << "enter a verb:" << endl;
	cin >> verb;
	
	string verb2;
	cout << "enter a verb:" << endl;
	cin >> verb2;
	
	//----------------------madlib words
	string wilsonInsult = "Doghouse";
	cout << "Once upon a time there was a biolgy teacher named Jamie Wilson." << endl;
	Sleep(1000);
	cout << "He " << verb <<" at a " << noun << " " + place << endl;
	Sleep(1000);
	cout << "and he " << verb2 <<" taught biology at fhs." << endl;
	Sleep(1000);
	cout << "One day,There was a student named, " << name << " who was jealous because he was in Mrs.Vadens class." << endl;
	Sleep(1000);
	cout << name << " walked over to Mr.Wilson and said," << endl;
	Sleep(1000);
	cout << "'Jamie is a girls name.'" << endl;
	Sleep(1000);
	cout << "Mr Wilson looked " << name << " dead in the eye and said:" << endl;
	Sleep(1500);
	cout << wilsonInsult << endl;
	Sleep(1500);
	cout << name << " was destoryed by mr wilsons roast and was burnt to a crisp." << endl;

	return 0;

}



