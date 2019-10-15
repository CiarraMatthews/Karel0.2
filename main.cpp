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

	if(!filename){
		cout << "file open failed" << endl;
	}

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
	karel.updateKarel(g1, karel.getLocation());
	do {
		//karel.takeCommand();

	} while (command != "quit();");


	return 0;
}



/*
look up file. eof or check Note
//end of file
for lab 4
cin.fail() then cin.clear if true  
*/