/*
 * lab.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: Dell PC
 */

#include<iostream>
#include<cstdlib>
#include "Game.hpp"
using namespace std;

class MathQuiz{
	int numTest;
	int totalCorrect;
	int totalNum;

public:
	MathQuiz(int num){
		numTest = num;
		totalCorrect = 0;
		totalNum = 0;
	}

	void processScores(){
		int randNum = rand() % 12 + 1;
		int userInput;

		cout << "What is " << randNum << " multiplied by " << numTest << " ?";
		cin >> userInput;
		cout << endl;

		if(userInput == (randNum * numTest)){
			cout << "Student was correct..." << endl;
			totalCorrect += 1;
			totalNum += 1;
		}

		else{
			cout << "Student was wrong..." << endl;
			totalNum += 1;
		}
	}

	void printCorrects(){
		cout << "Total correct is " << totalCorrect << " out of " << totalNum << endl;
		cout << endl;
	}


};

int main(){

	/*
	MathQuiz student(5);

	for(int i = 0; i < 10; i++){
		student.processScores();
		student.printCorrects();
	}
	*/


	/**************** Uncomment once done the Game declarations *******************/


	Game game("X","Y");
	game.printBoard();


	return 0;
}



