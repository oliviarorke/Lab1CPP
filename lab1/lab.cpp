/*
 * lab.cpp
 *
 *  Created on: Aug 29, 2019
 *      Authors: Michelle D'Souza, Olivia Rorke, Raj Trivedi
 */

#include<iostream>
using namespace std;

void printStars();
bool isPrime(int num);
void printSum();
int calcNTerms();
// void printMultiplicationTables(int num);
int countCollatzConjecture();
void printLeapYears();
void printStarsPattern(int n);

int main(){
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
		// cout << "\t\tProblem 6 test cases" << endl;

		// cout << " Testcase # 1 with parameter as an integer 13" << endl;
		/**
		 * Multiplication Table of 6
		 * 6 * 1 = 6
		 * 6 * 2 = 12
		 * 6 * 3 = 18
		 * 6 * 4 = 24
		 * 6 * 5 = 30
		 * 6 * 6 = 36
		 * 6 * 7 = 42
		 * 6 * 8 = 48
		 * 6 * 9 = 54
		 * 6 * 10 = 60
		 *
		 * Multiplication Table of 13
		 * 13 * 1 = 13
		 * 13 * 2 = 26
		 * 13 * 3 = 39
		 * 13 * 4 = 52
		 * 13 * 5 = 65
		 * 13 * 6 = 78
		 * 13 * 7 = 91
		 * 13 * 8 = 104
		 * 13 * 9 = 117
		 * 13 * 10 = 130
		 */
		// printMultiplicationTables(13);

		// cout << " Testcase # 2 with parameter as an integer 14" << endl;
		/**
		 * Multiplication Table of 6
		 * 6 * 1 = 6
		 * 6 * 2 = 12
		 * 6 * 3 = 18
		 * 6 * 4 = 24
		 * 6 * 5 = 30
		 * 6 * 6 = 36
		 * 6 * 7 = 42
		 * 6 * 8 = 48
		 * 6 * 9 = 54
	     * 6 * 10 = 60
	     *
		 * Multiplication Table of 14
		 * 14 * 1 = 14
		 * 14 * 2 = 28
		 * 14 * 3 = 42
		 * 14 * 4 = 56
		 * 14 * 5 = 70
		 * 14 * 6 = 84
		 * 14 * 7 = 98
		 * 14 * 8 = 112
		 * 14 * 9 = 126
		 * 14 * 10 = 140
		 */
		// printMultiplicationTables(14);

		// cout << " Testcase # 3 with parameter as an integer 15" << endl;
		/**
		 * Multiplication Table of 6
		 * 6 * 1 = 6
		 * 6 * 2 = 12
		 * 6 * 3 = 18
		 * 6 * 4 = 24
		 * 6 * 5 = 30
	     * 6 * 6 = 36
		 * 6 * 7 = 42
		 * 6 * 8 = 48
		 * 6 * 9 = 54
		 * 6 * 10 = 60
		 *
		 * Multiplication Table of 14
		 * 15 * 1 = 15
		 * 15 * 2 = 30
		 * 15 * 3 = 45
		 * 15 * 4 = 60
		 * 15 * 5 = 75
	     * 15 * 6 = 90
		 * 15 * 7 = 105
	     * 15 * 8 = 120
		 * 15 * 9 = 135
		 * 15 * 10 = 150
		 */
		// printMultiplicationTables(15);
		// printStars();

	/***************** Problem 8 test case **************************/
	cout << "\t\t Problem 8 test case" << endl;
	int count;
	count = countCollatzConjecture();
	cout << " Collatz Conjecture had to loop " << count << " time(s)" << endl;
	printStars();

	/***************** Problem 9 test case **************************/
	cout << "\t\t Problem 9 test case" << endl;
	printLeapYears();

	return 0;
}

void printStars(){
	cout << "************************************************************************" << endl;
}

bool isPrime(int num){
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
	int sum = 0;

	for(int i = 1; i <= 300; i++){
		sum += i;
		if(i % 20 == 0){
			cout << "Sum at " << i << "th term is " << sum << endl;
		}
	}
}

int calcNTerms(){
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

/**
void printMultiplicationTables(int num){
	cout << "Multiplication table of 6" << endl;

	for(int i = 1; i <= 10; i++){
		cout << 6 << " * " << i << " = " << (6*i) << endl;
	}

	cout << endl;
	cout << "Multiplication table of " << num << endl;

	for(int i = 1; i <= 10; i++){
		cout << num << " * " << i << " = " << (num*i) << endl;
	}
	cout << endl;

}
**/

int countCollatzConjecture(){
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
	if(n % 2 == 0){
		n = n + 1;
	}


}
