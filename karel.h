#pragma once
#include <iostream>
#include <vector>
#include "gameboard.h"

using namespace std;

int const NUMBEROFCOORDINATES = 2;

class Karel
{
public:
	Karel(int height);
	void move(int direction, int karelLoca[]);
	void turnLeft(int direction);
	void takeCommand(string command, int direction);
	int getDirection();
	int* getLocation();
	void updateKarel(GameBoard &gameBoard, int karelLoca[]);
private:
	int karelLoca[NUMBEROFCOORDINATES] = {0, 0};
	int direction;
	vector <string> commandList = {"move();", "turnLeft();"};

};

