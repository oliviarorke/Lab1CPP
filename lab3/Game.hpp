/*
 * Game.hpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Dell PC
 */

#ifndef GAME_HPP_
#define GAME_HPP_
#include<iostream>
using namespace std;

class Game{
	char **board;
	string name1;
	string name2;

public:
	Game(string x, string y);
	~Game(); // Destructor
	void drawEmptySquare();
	void printBoard();
	bool boardFull();
	bool checkWin(char gameLegend);
	void personPlay(char gameLegend);
	void playGame();

}; // Game

#endif /* GAME_HPP_ */
