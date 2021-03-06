// RPGT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "main.h"
using namespace std;
void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins);
void savePlayerStats(string name, int str, int def, int armor, int skill, int wins);

int main() 
{
	random_device rd;
	uniform_int_distribution<int> d10(1, 10);// die for random rolls
	
	// Player 1 stats
	string player1Name;
	int player1Str;
	int player1Def;
	int player1Armor;
	int player1Skill;
	int player1Wins;

	// Player 2 stats
	string player2Name;
	int player2Str;
	int player2Def;
	int player2Armor;
	int player2Skill;
	int player2Wins;
	cout << "Setup Player 1" << endl;
	setupPlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);

	cout << "Setup Player 2" << endl;
	setupPlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);


}

void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins) 
{

	// TODO: Load the character's file or create a new character.
	fstream file;
	cout << "Name: ";
	getline(cin, name);
	if (name == "")//if no name use defualt
	{
		name = "John Doe";
	}
	string filename = name + ".txt";
	file.open(filename, ios::in);
	if (file.is_open()) {
		// File exists, read data from file
		cout << "File found, loading from file." << endl;

		file >> str;
		file >> def;
		file >> armor;
		file >> skill;
		file >> wins;
	
	}
	else {
		// File doesn't exist, have the user fill it in
		bool accepted = false;
		while (!accepted) {
			int points = 20;
	}
}

void savePlayerStats(string name, int str, int def, int armor, int skill, int wins)
{

	// TODO: Save the player's stats to a file.

}

