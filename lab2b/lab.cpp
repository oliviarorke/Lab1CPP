/*
 * lab.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: Raj Trivedi, Olivia, Michele D'Souza
 */

#include<iostream>
#include<cstdlib>
using namespace std;

int *hanningWindow(int arr[],int arrSize, int windowSize);
int getWeightedAverage(int center[],int windowSize);

int main(){
	int arr[] = {3,8,2,5,1,4,6,0,2};
	int *newArr = hanningWindow(arr,9,5);

	for(int i = 0; i < 9; i++){
		cout << newArr[i] << " ";
	}

	cout <<endl;

}

int getWeightedAverage(int center[],int windowSize){
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
	 * Method weights the value in an array as a given parameter using hanning window and
	 * also finds average value
	 *
	 * Parameters: arr; address of the first value in the array
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




