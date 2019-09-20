/*
 * Game.cpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Dell PC
 */

#include<iostream>
#include "Game.hpp"
using namespace std;

Game::Game(string x,string y){
	board = new char *[3];
	name1 = x;
	name2 = y;
	drawEmptySquare();
}

void Game::drawEmptySquare(){
	for(int i = 0; i < 3; i++){
		board[i] = new char[3];

		for(int j = 0; j < 3; j++){
			board[i][j] = '_';
		}
	}
}

void Game::printBoard(){
	for(int i = 0; i < 3; i++){
		board[i] = new char[3];

		for(int j = 0; j < 3; j++){
			cout << board[i][j] << "\t";
		}

		cout << endl;
	}
}


Game::~Game(){
	for(int i = 0; i < 3; i++){
		delete [] board[i];
	}

	delete [] board;
	cout << "board destroyed!!" << endl;
}
