/*
 * lab.cpp
 *
 *  Created on: Aug 29, 2019
 *      Author: Raj Trivedi, Michele D'Souza, Olivia
 *
 *  This file contains 10 problems that introduces us to the basic notion of c++
 */

#include<iostream>
using namespace std;

void printStars();
bool isPrime(int num);
void printSum();
int calcNTerms();
void printMultiplicationTable(int num);
void printMultiplicationTables();
int countCollatzConjecture();
void printLeapYears();
void printStarsPattern(int n);
void collatzConjecture(int num1, int num2);

int main(){
	/***************** Problem 1 test cases **************************/
	cout << "\t\tProblem 1 test case" << endl;
	cout << "Hello World!" << endl;
	printStars();

	/***************** Problem 3 test cases **************************/
	cout << "\t\tProblem 3 test cases" << endl;

	//testIsPrime is either 0(False) or 1(True)
	bool testIsPrime;

	//isPrime(2) -> 1
	testIsPrime = isPrime(2);
	cout << "isPrime(2) -> " << testIsPrime << endl;

	//isPrime(4) -> 0
	testIsPrime = isPrime(4);
	cout << "isPrime(4) -> " << testIsPrime << endl;

	// isPrime(5) -> 1
	testIsPrime = isPrime(5);
	cout << "isPrime(5) -> " << testIsPrime << endl;
	printStars();

	/***************** Problem 4 test case ***************************/
	cout << "\t\t Problem 4 test case" << endl;
	cout << "Calculating sum from 1 to 300" << endl;

	//Function call
	printSum();
	printStars();

	/***************** Problem 5 test case ***************************/
	cout << "\t\t Problem 5 test case" << endl;

	//Function call
	int nTerms = calcNTerms();

	cout << "Number of terms that require for sum to exceed 100,000 is " << nTerms << endl;
	printStars();

	/***************** Problem 6 test cases **************************/
	cout << "\t\t Problem 6 test case" << endl;

	/** Multiplication table of 2 is
	 *
	 * 2 * 1 = 2
	 * 2 * 2 = 4
	 * 2 * 3 = 6
	 * 2 * 4 = 8
	 * 2 * 5 = 10
	 * 2 * 6 = 12
	 * 2 * 7 = 14
	 * 2 * 8 = 16
	 * 2 * 9 = 18
	 * 2 * 10 = 20
	 * 2 * 11 = 22
	 * 2 * 12 = 24
	 *
	 */
	printMultiplicationTable(2);

	/** Multiplication table of 5 is
	 *
	 * 5 * 1 = 5
	 * 5 * 2 = 10
	 * 5 * 3 = 15
	 * 5 * 4 = 20
	 * 5 * 5 = 25
	 * 5 * 6 = 30
	 * 5 * 7 = 35
	 * 5 * 8 = 40
	 * 5 * 9 = 45
	 * 5 * 10 = 50
	 * 5 * 11 = 55
	 * 5 * 12 = 60
	 */
	printMultiplicationTable(5);

	/** Multiplication table of 10 is
	 *
	 * 10 * 1 = 10
	 * 10 * 2 = 20
	 * 10 * 3 = 30
	 * 10 * 4 = 40
	 * 10 * 5 = 50
	 * 10 * 6 = 60
	 * 10 * 7 = 70
	 * 10 * 8 = 80
	 * 10 * 9 = 90
	 * 10 * 10 = 100
	 * 10 * 11 = 110
	 * 10 * 12 = 120
	 *
	 */
	printMultiplicationTable(10);
	printStars();

	/***************** Problem 7 test cases **************************/
		cout << "\t\t Problem 7 test case" << endl;
		printMultiplicationTables();
		printStars();

	/***************** Problem 8 test case **************************/
	cout << "\t\t Problem 8 test case" << endl;
	int count;
	count = countCollatzConjecture();
	cout << " Collatz Conjecture had to loop " << count << " time(s)" << endl;
	printStars();

	/***************** Problem 9 test case **************************/
	cout << "\t\t Problem 9 test case" << endl;
	printLeapYears();
	printStars();

	/***************** Problem 10 test case **************************/
	cout << "\t\t Problem 10 test case" << endl;

	cout << "Star pattern with n = 4" << endl;
	/**
	 * *       *
	 *  *     *
	 *   *   *
	 *    * *
	 *     *
     *    * *
	 *   *   *
	 *  *     *
	 * *       *
	 */
	printStarsPattern(4);

	cout << "Star pattern with n = 5" << endl;
	/**
	 * *       *
	 *  *     *
	 *   *   *
	 *    * *
	 *     *
	 *    * *
	 *   *   *
	 *  *     *
	 * *       *
	 */
	printStarsPattern(5);

	cout << "Star pattern with n = 6" << endl;
	/**
	 * *         *
	 *  *       *
	 *   *     *
	 *    *   *
	 *     * *
	 *      *
	 *     * *
	 *    *   *
	 *   *     *
	 *  *       *
	 * *         *
	 */
	printStarsPattern(6);
	printStars();

	/***************** Problem 11 test case **************************/
	cout << "\t\tProblem 11 test case" << endl;

	/**
	 * 3
	 * Collatz Conjecture is still working...
	 * 4
	 * Collatz Conjecture is still working...
	 * 5
	 * Collatz Conjecture is still working...
	 * 6
	 * Collatz Conjecture is still working...
	 * 7
	 * Collatz Conjecture is still working...
	 * 8
	 * Collatz Conjecture is still working...
	*/
	cout << "\t\tFirst number is 3 and second number is 9" << endl;
	collatzConjecture(3,9);

	/**
	 * 2
	 * Collatz Conjecture is still working...
	 * 3
	 * Collatz Conjecture is still working...
	 * 4
	 * Collatz Conjecture is still working...
	 */
	cout << "\t\tFirst number is 2 and second number is 5" << endl;
	collatzConjecture(2,5);

	/**
	 * 1
	 * Collatz Conjecture is still working...
	 * 2
	 * Collatz Conjecture is still working...
	 * 3
	 * Collatz Conjecture is still working...
	 * 4
	 * Collatz Conjecture is still working...
	 */
	cout << "\t\tFirst number is 1 and second number is 5" << endl;
	collatzConjecture(1,5);
	printStars();

	return 0;
}

void printStars(){
	/***
	 * Method prints stars horizontally
	 * Parameters: None
	 * Return type : None
	 */
	cout << "************************************************************************" << endl;
}

bool isPrime(int num){
	/***
	 * Method determines whether given input parameter is prime or not
	 * Parameters: an integer
	 * Return type : Boolean
	 */
	int counter = 2;
	while(counter < num){
		if(num % counter == 0){
			return false;
		}

		counter++;
	}
	return true;
}

void printSum(){
	/***
	 * Method prints sum from 1 to 300 and displays total after every 20 terms
	 * Parameters: None
	 * Return type: None
	 */
	int sum = 0;

	for(int i = 1; i <= 300; i++){
		sum += i;
		if(i % 20 == 0){
			cout << "Sum at " << i << "th term is " << sum << endl;
		}
	}
}

int calcNTerms(){
	/***
	 * Method calculates number of terms it takes for sum to exceed 100,000
	 * Parameters: None
	 * Return type: None
	 *
	 */
	int n = 1;
	int sum = 0;

	while(sum <= 100000){
		sum += n;
		if(sum <= 100000){
			n++;
		}
	}

	return n;
}


void printMultiplicationTable(int num){
	/***
	 * Method prints multiplication table for given input parameter integer from 1-12
	 * Parameters: num an integer
	 * Return type: None
	 */
	cout << "Multiplication table of " << num << " is " << endl;

	for(int i = 1; i <= 12; i++){
		cout << num << " * " << i << " = " << (num * i) << endl;
	}

	cout << endl;

}

void printMultiplicationTables(){
	/***
	 * Method prints multiplication tables for all numbers from 1-12 using function from Problem 6
	 * Parameters: None
	 * Return type: None
	 */
	for(int i = 1; i <= 12; i++){
		printMultiplicationTable(i);
	}
}


int countCollatzConjecture(){
	/***
	 * Method counts how many times Collatz Conjecture has to loop through for user input integer to reach 1
	 * Parameters: None
	 * Return type: Integer
	 */
	int num;
	int count = 0;

	cout << " Enter a natural positive number: ";
	cin >> num;
	cout << endl;

	while(num <= 0){
		cout << " Number does not seem to be natural and positive... " << endl;
		cout << " Enter a natural positive number: ";
		cin >> num;
		cout << endl;
	}

	cout << endl;

	while(num != 1){
		if(num % 2 == 0){
			num = num / 2;
		}

		else{
			num = (num * 3) + 1;
		}

		count++;
	}

	return count;
}

void printLeapYears(){
	/***
	 * Method prints leap years from 2017 up until next 400 years
	 * Parameters: None
	 * Return type: None
	 */
	cout << "Leap years from 2017 up until next 400 years are: " << endl;

	for(int year = 2017; year <= 2417;){
		if(year % 100 != 0){
			if(year % 4 != 0){
				year++;
			}

			else{
				cout << year << endl;
				year++;
			}
		}

		else{
			cout << year << endl;
			year++;
		}
	}
}

void printStarsPattern(int n){
	/***
	 * Method prints pattern of stars given an input parameter integer
	 * Parameters: n an integer
	 * Return type: None
	 */

	if(n % 2 == 0){
		n = n + 1;
	}

	//Beginning space refers to spaces before first star
	int beginningSpace = 1;

	//Middle space refers to spaces between two stars
	int middleSpace = (n * 2) - 2;

	//Ending space refers to spaces after second star
	int endingSpace = 0;

	for(int i = 0; i < n; i++){
		for(int spaces = 0; spaces < beginningSpace; spaces++){
			cout << " ";
		}

		if(i < n - 1){
			cout << "*";
		}

		else{
			cout << " * ";
		}

		for(int spaces = 0; spaces < middleSpace; spaces++){
			cout << " ";
		}

		if(i < n - 1){
			cout << "*";
		}

		for(int spaces = 0; spaces < endingSpace; spaces++){
			cout << " ";
		}

		beginningSpace++;
		middleSpace -= 2;
		endingSpace++;
		cout << endl;
	}

	beginningSpace = beginningSpace - 2;
	middleSpace = 2;
	endingSpace = endingSpace - 1;

	for(int i = n; i < (n * 2) - 1; i++){
		for(int spaces = 0; spaces < beginningSpace; spaces++){
			cout << " ";
		}

		cout << "*";

		for(int spaces = 0; spaces < middleSpace; spaces++){
			cout << " ";
		}

		cout << "*";

		for(int spaces = 0; spaces < endingSpace; spaces++){
			cout << " ";
		}

		beginningSpace -= 1;
		middleSpace += 2;
		endingSpace -= 1;
		cout << endl;
	}

	cout << endl;
	cout << endl;

}

void collatzConjecture(int num1, int num2){
	/***
	 * Method implements Collatz Conjecture for every numbers between given two input parameters integers
	 * Parameters: num1 first integer
	 *             num2 second integer
	 *
	 * Return type: None
	 */

	int i;
	int j = 1;
	for(i = num1 ; i < num2;){
		cout << i << endl;

		while(i != 1){
			if(i % 2 == 0){
				i = i / 2;
			}

			else{
				i = (i * 3) + 1;
			}
		}

		if(i == 1){
			cout << "Collatz Conjecture is still working..." << endl;
		}

		else{
			cout << "Collatz Conjecture is not working..." << endl;
		}

		i = num1 + j;
		j++;
	}

	cout << endl;
}
