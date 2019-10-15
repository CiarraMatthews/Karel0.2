#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class GameBoard
{
public:
	GameBoard();
	GameBoard(int height, int width);
	void fillGameBoard();
	void printGameBoard();

	
	int getHeight();
	int getWidth();
	vector<vector<char>> getBoard();
private:
	int height, width;
	vector<vector<char>> board;
};

