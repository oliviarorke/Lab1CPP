/*
 * lab.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: Raj Trivedi, Olivia, Michele D'Souza
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void randArray(int x, int &y);
void reverseFunc (int len);
int newFunc();
void rangeFunc (int len, int range);
int *hanningWindow(int arr[],int arrSize, int windowSize);
int getWeightedAverage(int center[],int windowSize);
int* randArrayGenerator(int *x, int *y, int *z);
int* randStackArray(int size);
void printAddresses(int nums[], int size);
void printDoubleAddresses(double nums[], int size);
int* removeDoubleNumbers(int nums[], int* size);
void arrayPrint(int arr[], int length);
void arrayPrint1(int arr[], int length);
int** twoDArrayFunc(int* num1, int* num2);
void graphPrint(int arr[], int len, int high, int low);

int main(){
	cout << "\t\tProblem 1 test case" << endl;
		int smallNum=-1;
		randArray(53, smallNum);
		randArray(23, smallNum);
		randArray(10, smallNum);
		cout << endl;


		cout << "\t\tProblem 2 test case" << endl;
		reverseFunc(5);
		reverseFunc(3);
		reverseFunc(6);
		cout << endl;



		cout << "\t\tProblem 3 test case" << endl;
		rangeFunc(5, 10);
		rangeFunc(6, 15);
		rangeFunc(10, 20);
		cout << endl;


		cout << "\t\tProblem 4 test case" << endl;
		int x = newFunc();
		cout << newFunc();
		cout << x;
		cout << endl;
		/* Question Comment - The code had an error with [ int *x = newFunc ] because
		 * it was a conversion from an int to a pointer. It, however, still
		 * gave the same address for x, but not the return value of newFunc
		 */


		cout << "\t\tProblem 5 test case" << endl;
		int arr1[] = {1,2,3,4};
		int arr2[] = {13,22,53,74,35};
		int arr3[] = {11,12,13,14,15,16};
		arrayPrint(arr1, 4);
		arrayPrint(arr2, 5);
		arrayPrint(arr3, 6);
		cout << endl;

		for (int arr[25], s=0; s<25; s++) {
			arr[s] = rand()%10;
		}

		cout << "\t\tProblem 6 test case" << endl;
		int *w = new int;
		int *y = new int;
		int *z = new int;
		int *a = randArrayGenerator(w, y, z);
		arrayPrint1(a, *w);
		cout << "\n" << endl; //New Line for readability

		cout << "\t\tProblem 7 test case" << endl;
		randStackArray(25);
		//cout << "\n" << endl; //New Line for readability

		cout << "\t\tProblem 8 test case" << endl;
		printAddresses(a, *w);
		cout << "\n" << endl; //New Line for readability

		//Garbage Collection
		delete w;
		delete y;
		delete z;
		delete[] a;

		cout << "\t\tProblem 9 test case" << endl;
		double ls[5] = {2.5, 5.4, 7.9, 10.1, 55.7};
		printDoubleAddresses(ls, 5);
		cout << "\n" << endl; //New Line for readability

		cout << "\t\tProblem 10 test case" << endl;
		int* size = new int;
		*size = 25;
		int nums[25] = {5,4,4,3,6,6,6,8,9,5,1,3,8,8,1,8,9,9,3,2,2,2,6,1,2};
		arrayPrint(nums, *size);
		cout << "\n" << endl; //New Line for readability

		int *arr = removeDoubleNumbers(nums, size);
		arrayPrint(arr, *size);
		cout << "\n" << endl; //New Line for readability

		//Garbage Collection
		delete size;
		delete[] arr;

		cout << "\t\tProblem 11 test case" << endl;
		getWeightedAverage(arr2, 10);
		cout << endl;

		cout << "\t\tProblem 12 test case" << endl;
		int *newArr = hanningWindow(arr2, 6, 3);

		cout << "Before hanning window: ";
		for(int i = 0; i < 6; i++){
			cout << arr2[i] << " ";
		}

		cout << endl;

		cout << "After hanning window: ";
		for(int i = 0; i < 6; i++){
			cout << newArr[i] << " ";
		}

		cout << endl;
		cout << endl;


		cout << "\t\tProblem 13 test case" << endl;
		int arrG1[] = {1,2,3,4,5};
		int arrG2[] = {3,12,9};
		int arrG3[] = {1,8,3,7,5,6};

		graphPrint(arrG1, 5, 5, 1);
		cout << endl;
		graphPrint(arrG2, 3, 12, 3);
		cout << endl;
		graphPrint(arrG3, 6, 8, 1);
		cout << endl;

		cout << "\t\tProblem 14 test case" << endl;
		int variable;
		int var3;

		int **arr5 = twoDArrayFunc(&variable,&var3);


		for(int x=0; x<variable; x++){
			for(int y=0; y<var3; y++){
				cout << arr5[x][y];
			}
		}
}

int getWeightedAverage(int center[],int windowSize){
	/***
	 * Method weights the value appropriately using hanning window
	 * and returns weighted averaged value
	 *
	 * Parameters: center; an address of the first value in an array
	 *             windowSize; an odd integer
	 *
	 * Return type: Integer
	 */

	int count = 0;
	int windowRadius = windowSize / 2;
	center -= windowRadius;

	int weighting = 1;
	int sum = 0;

	for(int i = -1 * windowRadius; i <= windowRadius ; i++){
		sum += *center * weighting;
		center++;

		count += weighting;
		if(i < 0){
			weighting++;
		}

		else{
			weighting--;
		}
	}



	return sum / count;

}
int *hanningWindow(int arr[],int arrSize, int windowSize){
	/***
	 * Method weights the value in an array getAveragedValue() function and
	 * returns new array on the heap that is filtered
	 *
	 * Parameters: arr; address of the first value in the array
	 *             arrSize: size of an array
	 *             windowSize; an odd natural integer
	 *
	 * Return type: Address of an Integer(Pointer to Integer)
	 */

	int *newArr = new int[arrSize];
	int windowRadius = windowSize / 2;

	for(int i = 0; i < arrSize; i++){

		if(i - windowRadius >= 0 && i + windowRadius <= arrSize - 1){
			newArr[i] = getWeightedAverage(&arr[i],windowSize);
		}

		else{
			newArr[i] = 0;
		}

	}

	return newArr;

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
	cout << arr[length] << ", ";
	cout << smallest;
	cout << endl;
}

void reverseFunc (int len) {
	int arr[len];
	for (int x=0; x<len; x++) {
		arr[x]=rand()%50;
		cout << arr[x] << ", ";
	}
	for (int j=len-1; j>=0 ; j--) {
		cout << arr[j] << ", ";
	}
	cout << endl;
}



void rangeFunc (int len, int range) {

	int arr[len];
	int small;
	for (int x=0; x<len; x++) {
		arr[x]=rand()%range;
		for (int i=0, j=i+1;i<len && j<len; i++, j++) {
			if(arr[i]>arr[j]) {
				small=arr[i];
				arr[i]=arr[j];
				arr[j]=small;
				cout << small << ", ";
			}
		}
		cout << endl;
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

//Displays a comma delineated list of values in a supplied array
void arrayPrint1(int arr[], int length) {
    for (int x=0; x<length; x++) {
        cout << arr[x] << ", ";
    }
    cout << endl;
}

//Creates an array filled with random integers on the heap
int* randArrayGenerator(int *x, int *y, int *z){
    srand(static_cast<unsigned int>(time(NULL))); //Set the generator's seed
    static int length = (rand() % 25) + 25; //Random number between 25 and 50
    int min = -(rand() % 5) - 5; //Random number between -10 and -5
    int max = (rand() % 5) + 5; //Random number between 5 and 10

    //Create the array and fill it iteratively with rands between min and max
    int *array = new int[length];

    for(int i = 0; i < length; i++){
        array[i] = (rand() % (max-min)) + min;
    }

    //Modify input parameters to hold lenth, max, and min
    *x = length;
    *y = max;
    *z = min;

    return array;
}

//This function fails to display properly as when the array (a) is called in the main method,
//its reference in the stack has been cleared as the top of stack is cleared when the method is finished executing.
//This causes wildly wrong integers to display in the output.
int* randStackArray(int size){
    int min = -(rand() % 5) - 5; //Random number between -10 and -5
    int max = (rand() % 5) + 5; //Random number between 5 and 10

    //Create the array on the stack
    int a[size];

    //Fill the array iteratively with rands between min and max
    for(int i = 0; i < size; i++){
        a[i] = (rand() % (max-min)) + min;
    }

    return a;
}

//Prints the memory addresses of each element of a supplied array
void printAddresses(int nums[], int size){
    for(int i = 0; i < size; i++){
        cout << &nums[i] << + ", ";
    }
}

//Displays a comma delineated list of doubles from a specified array with a supplied size
void printDoubleAddresses(double nums[], int size){
    for(int i = 0; i < size; i++){
        cout << &nums[i] << + ", ";
    }
}

int* removeDoubleNumbers(int nums[], int* size) {
    //Create a temporary array of the same size to add the non repeating values to
    int tempArray[*size];
    int newSize = 0;

    //Iterate through the array, adding valid values to tempArray and incrementing newSize as necessary
    for(int i = 0; i < *size; i++){
        if(nums[i] != nums[i+1]){
            tempArray[newSize] = nums[i];
            newSize++;
        }
    }

    //Create a new array in the heap with the non duplicate values
    int *updatedArray = new int[newSize];

    //Populate updatedArray with the values from tempArray
    for(int i = 0; i < newSize; i++){
        updatedArray[i] = tempArray[i];
    }

    //Adjust size parameter
    *size = newSize;

    //Return the new array
    return updatedArray;
}

void graphPrint(int arr[], int len, int high, int low) {
	for (int var=high; var>low; var--) {
		cout << var << ":";
		for (int x=0; x<len; x++) {
			if (arr[x] == var) {
				cout <<"*";
				break;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

int **twoDArrayFunc(int *num1, int *num2) {
	int a = rand()%8;
	while (a<4) {
		a = rand()%8;
	}

	int b = rand()%10;
	while (b<5) {
		b = rand()%10;
	}

	*num1=a;
	*num2=b;

	int **arr=new int*[a];
	for (int x=0; x<a; x++) {
		arr[a] = new int[b];
	}

	for (int x = 0; x<5; x++) {
		int x1 = rand()%a;
		int y1 = rand()%b;

		while (arr[x1][y1] == 1) {
			x1=rand()%a;
			y1=rand()%b;
		}
		arr[x1][y1]=1;
	}
	return arr;
}



