/*
 * lab2b.cpp
 *
 *  Created on: Sep 11, 2019
 *      Author: Raj Trivedi, Olivia Rorke, Michele D'Souza
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

void randArray(int x, int &y);
void reverseFunc (int len);
int newFunc();
void rangeFunc (int len, int range);
void arrayPrint(int arr[], int length);

int main() {


	//Problem 1
	cout << "\t\tProblem 1 test case" << endl;
	int smallNum=-1;
	randArray(53, smallNum);
	cout << endl;


	//Problem 2

	cout << "\t\tProblem 2 test case" << endl;
	reverseFunc(5);
	cout << endl;




	//Problem 3
	cout << "\t\tProblem 3 test case" << endl;
	rangeFunc(9, 3);
	cout << endl;





	//Problem 4
	cout << "\t\tProblem 4 test case" << endl;
	int x = newFunc();
	cout << newFunc();
	cout << x;
	cout << endl;
	/* Question Comment - The code had an error with [ int *x = newFunc ] because
	 * it was a conversion from an int to a pointer. It, however, still
	 * gave the same address for x, but not the return value of newFunc
	 */


	//Problem 5
	cout << "\t\tProblem 5 test case" << endl;
	int arr1[] = {1,2,3,4};
	arrayPrint(arr1, 5);

	for (int arr[25], s=0; s<25; s++) {
		arr[s] = rand()%10;
	}

}


void randArray (int length, int &smallest) {

	smallest=-1;
	int arr[length];
	for (int x=0, i=rand()%50, smallest=arr[0]; x<length; x++) {
		if (smallest>arr[x]) {
			smallest=arr[x];
		}
		else {
			arr[x]=i;
		}
	}
	return;
	cout << arr[length] << ", ";
	cout << smallest;
	cout << endl;
}



void reverseFunc (int len) {
	int arr[len];
	for (int x=0, i=rand()%50; x<len; x++) {
		arr[x]=i;
		cout << arr[x] << ", ";
	}
	for (int j=len; j>0 ; j--) {
		cout << arr[j];
	}
}





void rangeFunc (int len, int range) {
	int arr[len];
	for (int x=0, i=rand()%range; x<len; x++) {
		arr[x]=i;
		for (int smallNum=arr[0]; smallNum>arr[x]; range++) {
			smallNum=arr[x];
			cout << smallNum << endl;
		}
	}
}


int newFunc() {
	int *val;
	val = new int;
	*val=3;
	int **address = &val;

	cout << val << endl;
	cout << &val << endl;
	return **address;
}



void arrayPrint(int arr[], int length) {
	for (int x=0; x<length; x++) {
		cout << arr[x] << ", ";
	}
	cout << endl;
}




