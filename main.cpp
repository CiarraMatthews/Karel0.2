#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "gameboard.h"
#include "karel.h"

using namespace std;


void takeCommand(string command, int direction, int karelLoca[], Karel karel) {
	if (command == "move();")
		karel.move(direction, karelLoca);
}

int main() {
	string command;
	/*char filename[50];
	ifstream myFile;
	cin.getline(filename, 50);
	myFile.open(filename);

	if (!myFile.is_open()) {
		exit(EXIT_FAILURE);
	}

	char word[50];
	myFile >> word;
	while (myFile.good()) {
		cout << word << " ";
		myFile >> word;
	}*/

	GameBoard g1;
	Karel karel(g1.getHeight());
	//g1.fillGameBoard();
	g1.printGameBoard();
	do {
		

	} while (command != "quit();");


	return 0;
}