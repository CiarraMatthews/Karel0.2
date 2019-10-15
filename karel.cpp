#include <iostream>
#include "karel.h"
#include "gameboard.h"

const int EAST = 0;
const int NORTH = 1;
const int WEST = 2;
const int SOUTH = 3;
const int X = 0;
const int Y = 1;
const char karel = 'o';
const char BEEPER = 'X';
const char KARELNBEEPER = '@';
const int PAIR = 2;
const char EMPTY = '-';

Karel::Karel(int height) {
	direction = EAST;
	karelLoca[1] = height;
	cout << "The height is " << height << endl;
}

void Karel::move(int direction, int karelLoca[]) {
	switch (direction)
	{
	case 0:
		karelLoca[Y] = karelLoca[Y] + 1;
		break;
	case 1:
		karelLoca[X] = karelLoca[X] - 1;
		break;
	case 2:
		karelLoca[Y] = karelLoca[Y] - 1;
		break;
	case 3:
		karelLoca[X] = karelLoca[X] + 1;
	}
}

void Karel::turnLeft(int direction) {
	if (direction >= EAST && direction <= WEST) {
		direction++;
	}
	else {
		direction = EAST;
	}
}

void Karel::takeCommand(string command, int direction) {
	if (command == "move()") {
		move(direction, karelLoca);
		//updateKarel(karelBoard, karelLoca, karel);
	}
	else if (command == "turnLeft()") {
		turnLeft(direction);
	}
	else if (command == "putBeeper()") {
		//putBeeper(karelBoard, karelLoca);
	}
	else if (command == "pickBeeper()") {
		//pickBeeper(karelBoard, karelLoca, karel, beeperWasThere);
	}
	else {
		cout << "Syntax error" << endl;
	}
}

int Karel::getDirection() { return direction;  }

int* Karel::getLocation() { return karelLoca;  }

void updateKarel(GameBoard& gameBoard, int karelLoca[]) {
	for (int row = 0; row < gameBoard.getHeight(); row++) {
		for (int column = 0; column < gameBoard.getWidth(); column++) {
			if (gameBoard.getBoard()[row][column] == karel) {
				//share constants 
				gameBoard.getBoard()[row][column] = EMPTY;
			}
			if (gameBoard.getBoard()[row][column] == '@') {
				gameBoard.getBoard()[row][column] = 'X';
			}
		}
	}
	if (gameBoard.getBoard()[karelLoca[X]][karelLoca[Y]] == 'X') {
		gameBoard.getBoard()[karelLoca[X]][karelLoca[Y]] = '@';
	}
	else {
		gameBoard.getBoard()[karelLoca[X]][karelLoca[Y]] = karel;
	}
}
