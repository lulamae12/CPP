#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int input;
	int nowPlaying = 0;
	int angle = 45;
	string songName = "sample.mp3";
	string musicPlaylist[] = {"JurassicParkThemeSong.mp3"};
	sf::RenderWindow window(sf::VideoMode(1, 1), "mp3");
	sf::Music music;
	music.openFromFile("JurassicParkThemeSong.wav");
	sf::Music music;
	music.setVolume(50);

	music.play();

	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		
		cout << "--------------[Commands]---------------" << endl;
		cout << "Press 1 to play."<< endl;
		cout << "Press 2 to pause." << endl;
		cout << "Press 3 to quit." << endl;
		cout << "---------------------------------------" << endl;
		cout << "Please enter your choice: ";
		cin >> input;
		if (input == 1)
		{
			//window.draw(playButton);
			cout << string(100, '\n');
			cout << "Playing Song:" << musicPlaylist[nowPlaying] << endl;
			music.play();
			
		}
		else if (input == 2)
		{
			//window.draw(playButton);
			cout << string(100, '\n');
			cout << "Song Paused." << endl;
		}
		else if (input == 3)
		{
			
			cout << string(100, '\n');
			cout << "Quitting." << endl;
			window.close();
		}
		
		
	}
}