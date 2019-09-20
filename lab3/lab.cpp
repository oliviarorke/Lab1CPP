/*
 * lab.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: Dell PC
 */

/***(1) Try on Computer(10 pts):
 * 1) Way back when schools were first formed, there used to be math multiplication quizzes. Students would be told that
 *    they would be tested on the multiplication tables for a particular number. So the student would go home and
 *    memorize all the multiplication table for a particular number. And then the next day the teacher would randomly
 *    pick some numbers and ask the student to write down the answer to what was the random number times the
 *    number whose multiplication table the student was supposed to memorize.
 *    Using the above method (this one time in this course!), create a class definition for a math quiz.
 *
 *       The properties should include an integer for the number we’re testing on today.
 *       The other properties should be an int for the number of answers the student got right and another for the
 *        total number the student has been tested on.
 *       The constructor should take a number as an input parameter (that will be sent in when you create an object
 *        and can be any integer, although for testing purposes you might want to pick an integer under 10 and over
 *        0).
 *       The constructor should also initialize the number of correct answers and the total number quizzed on to 0
 *
 *   At a minimum, the methods should include
 *   1) A method that randomly generates a number between 1 and 13 (excluding 13) and then asks the user what
 *      is that number multiplied by the property number is. It then reads in what the user types, checks to see if
 *      the answer is correct, and, if so, prints out that the student was correct and increases both te number
 *      correct field and the total number quizzed on field. If the answer is incorrect it should print out that the
 *      user was wrong and only increase the total number quizzed on field.
 *
 *   2) A method that prints out how many correct out of total number quizzed on.
 *
 *   In your main:
 *    Create an object based on your quiz class.
 *    Create a loop that loops at least 10 times. Inside the loop, call the quiz object’s method 1, above, and then
       the quiz object’s method 2, above.
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



