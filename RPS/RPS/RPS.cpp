// RPS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <random>
#include <windows.h>// allows sleep and stuff
using namespace std;

int main()
{
	string aiChoice;
	string playerChoice;
	int playerChoiceInt;
	bool playAgain = true;
	random_device rd;
	int playerScore = 0;
	int AiScore = 0;
	cout << "This is a rock paper scissors game. The first to 3 wins! (type 9 to quit)" << endl;
	while (playerScore != 3 || AiScore != 3)
	{
		
		if (playerScore == 3) 
		{
			cout << "The player has won the match!" << endl;
			break;
		}
	
		if (AiScore == 3) 
		{
			cout << "The AI has won the match!" << endl;
			break;
		}
		
		cout << "please enter your choice((0)Rock, (1)Paper or (2)Scissors):" << endl;
		cin >> playerChoiceInt;
		cout << endl;
		if (playerChoiceInt == 9)
		{
			break;
		}
		if (playerChoiceInt == 0)
		{
			string playerchoice = "Rock";
		}
		else if (playerChoiceInt == 1)
		{
			string playerchoice = "Paper";
		}
		else
		{
			string playerchoice = "Scissors";
		}
		cout << "Rock..."<< "\n" << endl;
		Sleep(1000);
		cout << "Paper..." << "\n" << endl;
		Sleep(1000);
		cout << "Scissors..." << "\n" << endl;
		Sleep(1000);
		cout << "Shoot!" << "\n" << endl;
	
		int aiChoiceInt = rd() % 3; //0 = ROCK 1 = PAPER 2 = SCISSORS
		if (aiChoiceInt == 0)
		{
			string aiChoice = "Rock";
			
		}
		else if (aiChoiceInt == 1)
		{
			string aiChoice = "Paper";
			
		}
		else
		{
			string aiChoice = "Scissors";
			
		}
		cout << endl;

		if (aiChoiceInt == 0 && playerChoiceInt == 2)
		{
			cout << "the AI Chose: Rock" << endl;
			cout << "The player Choose: Scissors" << "\n" << endl;
			cout << "The AI Won!" << endl;
			AiScore++;
		}
		
		if (aiChoiceInt == 1 && playerChoiceInt == 2)
		{
			cout << "the AI Choose: Paper" << endl;
			cout << "The player Choose: Scissors" << "\n" << endl;
			cout << "The Player Won!" << endl;
			playerScore++;
		}
		
		if (aiChoiceInt == 1 && playerChoiceInt == 0)
		{
			cout << "the AI Choose: Paper" << endl;
			cout << "The player Choose: Rock " << "\n" << endl;
			cout << "The AI Won!" << endl;
			AiScore++;
		}
		
		if (aiChoiceInt == 2 && playerChoiceInt == 0)
		{
			cout << "the AI Choose: Scissors" << endl;
			cout << "The player Choose: Rock" << "\n" << endl;
			cout << "The Player Won!" << endl;
			playerScore++;
		}
		
		if (aiChoiceInt == 0 && playerChoiceInt == 1)
		{
			cout << "the AI Choose: Rock" << endl;
			cout << "The player Choose: Paper " << "\n" << endl;
			cout << "The Player Won!" << endl;
			playerScore++;
		}
		
		if (aiChoiceInt == 2 && playerChoiceInt == 1)
		{
			cout << "the AI Choose: Scissors" << endl;
			cout << "The player Choose: Paper" << "\n" << endl;
			cout << "The AI Won!" << endl;
			AiScore++;
		}
		
		if (aiChoiceInt == playerChoiceInt)
		{
			cout << "it was a tie!" << endl;
		}
		cout << "\n" <<"The score is: " << endl;
		cout << "PLAYER: " << playerScore << endl;
		cout << "AI:" << AiScore << endl;
		cout << endl;
		
	}
	cout << "game over!" << endl;
	system("pause");
	return 0;
}

