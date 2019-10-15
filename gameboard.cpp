#include <iostream>
#include "gameboard.h"
#include "karel.h"
#include <vector>

using namespace std;

const char EMPTY = '-';

GameBoard::GameBoard() {
	this->height = 20;
	this->width = 30;
	for (int row = 0; row < height; row++) {
		//Note to self: For each row, push back a vector of chars the length of width
		board.push_back(vector<char>(width));
	}
	fillGameBoard();
	Karel(getHeight());
}

GameBoard::GameBoard(int height, int width) {
	this->height = height;
	this->width = width;
	for (int row = 0; row < height; row++) {
		board.push_back(vector<char>(width));
	}
	
}

void GameBoard::fillGameBoard() {
	for (int row = 0; row < getHeight(); row++) {
		for (int column = 0; column < getWidth(); column++) {
			board[row][column] = EMPTY;
		}
	}
}

void GameBoard::printGameBoard() {
	for (vector<char> rows : board) {
		for (char columns : rows) {
			cout << columns;
		}
		cout << endl;
	}
}

int GameBoard::getHeight() {
	return height;
}

int GameBoard::getWidth() {
	return width;
}

vector<vector<char>> GameBoard::getBoard() { return board; }