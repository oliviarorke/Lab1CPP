/*
 * lab.cpp: Addresses/Pointers/Functions
 *
 *  Created on: Sep 7, 2019
 *      Author: Raj Trivedi, Olivia, Michele D'Souza
 *
 *  This file contains some "Try On Computer Exercises" problems and also introduces us to concept of call by value, call by pointer
 *  and call by reference
 *
 */

/************************** Try On Computer Exercises ***********************************************************************/
/**
 * 1. Create a variable. Give the variable a value (just like above. Print out the value. Now print out the variable’s memory address.
 *    How would you print out the variable’s name?
 *
 * A. int x = 5;
 *    cout << "Value of the variable is " << x << endl; // 5
 *    cout << "Address of the variable is " << &x << endl; // 0x62ff0c
 *
 * 2. Create a variable (x). Now create a variable that holds an address (a variable that holds an address is known as a pointer) (y).
 *    Give it the address of the first variable. Now:
 *    a) Print out the value the pointer points to.
 *    b) Print out the address in the pointer
 *    c) Make sure it’s the same as the variable’s address by printing out the variable’s address
 *    d) Print out the pointer’s memory address (not the one it holds, it’s actual location in memory address)
 *
 *    Wanna see something cool?
 *    e) Change x’s value to a different number.
 *    f) Print out the value that the pointer points to (just like you did in a), above)
 *
 *    Did what y points to’s value change? Why?
 *
 * A. int x = 5;
 *    int *y = &x;
 *
 *    cout << *y << endl; // 5
 *    cout << y << endl; // 0x62ff0c
 *    cout << &x << endl; // 0x62ff0c
 *    cout << &y << endl; // 0x62ff08
 *
 *    x = 6;
 *    cout << *y << endl; // 6
 *
 *    Yes, the value y point to changed. Since y holds an address of x, so whatever value x holds will be
 *    the same value at the address of y.
 *
 * 3.   a) Change the value y points to to a different number.
 *      b) Print out the value in x
 *
 * A.   y* = 9;
 *      cout << x << endl; // 9;
 *
 * 4.  If x = 3; and *y = &x, then, given the following:
 *     *y=*y**y;
 *     cout << x << endl;
 *     What is printed out?
 *
 * A.  9
 *
 * 5.  int x = 4;
 *
 *     cout << x << endl;
 *     cout << &x << endl; // address of x is 0x61ff10
 *     int *y = &x; // address of y is 0x32c320
 *     cout << y << endl; // 0x32c320
 *     cout << *y << endl; // 4
 *
 *     x = 8;
 *     cout << y << endl; // 0x32c320
 *     cout << *y << endl; // 8
 *
 * 6. Given the following code, modify so that it is call by pointer and the two values are swapped.
 * #include <iostream>
 * #include <stdlib.h>
 * using namespace std;
 *
 * void swap(int x, int y);
 *
 * int main() {
 * int a = 2;
 * int b = 4;
 * cout << a << b<< endl;
 * swap(a,b);
 * cout << a << b<< endl;
 * return 0;
 * }
 *
 * void swap(int m, int n) {
 * int tmp = m;
 * m = n;
 * n = tmp;
 * }
 *
 * A. #include <iostream>
 *    #include <stdlib.h>
 *    using namespace std;
 *
 *    void swap(int x, int y);
 *
 *    int main() {
 *    int a = 2;
 *    int b = 4;
 *    cout << a << b<< endl;
 *
 *    swap(&a,&b);
 *
 *    cout << a << b<< endl;
 *    return 0;
 *
 *  }
 *
 *    void swap(int *m, int *n) {
 *    int tmp = *m;
 *    *m = *n;
 *    *n = tmp;
 *  }
 *
 * 7. Given the following code, modify so that it is call by reference and the two values are swapped.
 * #include <iostream>
 * #include <stdlib.h>
 * using namespace std;
 *
 * void swap(int x, int y);
 *
 * int main() {
 *  int a = 2;
 *  int b = 4;
 *  cout << a << b<< endl;
 *  swap(a,b);
 *  cout << a << b<< endl;
 *  return 0;
 * }
 *
 * void swap(int m, int n) {
 *  int tmp = m;
 *  m = n;
 *  n = tmp;
 * }
 *
 * A. #include <iostream>
 *    #include <stdlib.h>
 *    using namespace std;
 *
 *    void swap(int x, int y);
 *
 *    int main() {
 *     int a = 2;
 *     int b = 4;
 *     cout << a << b<< endl;
 *
 *     swap(a,b);
 *     cout << a << b<< endl;
 *     return 0;
 *   }
 *
 *    void swap(int &m, int &n) {
 *     int tmp = m;
 *     m = n;
 *     n = tmp;
 *   }
 *
 * 8. What is printed below?
 *    void f2(char p1, char *p2, char &p3) ;
 *
 *    int main() {
 *
 *    char x = 'e';
 *    char y = 'o';
 *    char z = 'g';
 *    char v = 'l';
 *    cout << z << y << y << z << v << x << endl; //prints?
 *
 *    f2(x,&z,v);
 *
 *    cout << v << y << z << x<<endl; //prints?
 *    return 0;
 *  }
 *
 *    void f2(char p1, char *p2, char &p3) {
 *     p1 = 'h';
 *     *p2 = 'd';
 *     p3 = 'c';
 *  }
 *
 * A. void f2(char p1, char *p2, char &p3) ;
 *
 *    int main() {
 *
 *    char x = 'e';
 *    char y = 'o';
 *    char z = 'g';
 *    char v = 'l';
 *    cout << z << y << y << z << v << x << endl; // google
 *
 *    f2(x,&z,v);
 *
 *    cout << v << y << z << x << endl; // code
 *    return 0;
 *  }
 *
 *    void f2(char p1, char *p2, char &p3) {
 *     p1 = 'h';
 *     *p2 = 'd';
 *     p3 = 'c';
 *  }
 */
/**********************************************************************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;

void printValue();
void printValue2(int value);
int randNumValue();
void cubeNum(int *num);
void addRandValue(int &num);
void changeValue(int *num1, int *num2);
void createWord(char c1, char *c2, char &c3);
bool isSwap(int *num1, int *num2);
void printSwapValues();

int main(){

	/****** Problem 1 test case ********/
	cout << "\t\tProblem 1 test case" << endl;
	cout << "\tInside the function... " << endl;
	printValue();

	/****** Problem 2 test case ********/
	cout << "\t\tProblem 2 test case" << endl;

	int num = 9;
	cout << "\tBefore calling the function..." << endl;
	cout << "Value of the variable is " << num << endl;
	cout << "Address of the variable is " << &num << endl;
	cout << endl;

	cout << "\tInside the function..." << endl;
	printValue2(num);

	cout << "\tAfter calling the function..." << endl;
	cout << "Value of the variable is " << num << endl;
	cout << "Address of the variable is " << &num << endl;
	cout << endl;

	/***
	 * This type of function call is Call By Value
	 *
	 * Copy of variable "num" is send into the parameter of printValue2()
	 * function
	 *
     * Thus, both variables have different locations in memory and thus
     * have different values in their respective locations
	 */



	/****** Problem 3 test case ********/
	cout << "\t\tProblem 3 test case" << endl;

	cout << "\tInside the function... " << endl;
	int randNum = randNumValue();

	cout << "\tAfter calling the function... " << endl;
	cout << "Value of the variable is " << randNum << endl;
	cout << "Address of the variable is " << &randNum << endl;
	cout << endl;

	/****** Problem 4 test case ********/
	cout << "\t\tProblem 4 test case" << endl;

	int value = 4;
	cout << "\tBefore calling the function..." << endl;
	cout << "Value of the variable is " << value << endl;
	cout << "Address of the variable is " << &value << endl;
	cout << endl;

	cout << "\tInside the function... " << endl;
	cubeNum(&value);

	cout << "\tAfter calling the function..." << endl;
	cout << "Value of the variable is " << value << endl;
	cout << "Address of the variable is " << &value << endl;
	cout << endl;

	/***
	 * This type of function call is Call By Pointer
	 *
	 * Instead of sending copy of variable "value", we send
	 * an address of that variable
	 *
     * Since the value at the address will be changed, the function call
     * will change the value of the variable in main() function
	 */



	/****** Problem 5 test case ********/
	cout << "\t\tProblem 5 test case" << endl;

	int x = 4;
	cout << "\tBefore calling the function... " << endl;
	cout << "Value of the variable is " << x << endl;
	cout << "Address of the variable is " << &x << endl;
	cout << endl;

	cout << "\tInside the function... " << endl;
	addRandValue(x);

	cout << "\tAfter calling the function... " << endl;
	cout << "Value of the variable is " << x << endl;
	cout << "Address of the variable is " << &x << endl;
	cout << endl;

	/***
	 * This type of function call is Call By Reference
	 *
	 * Call By Reference is very similar to Call By Pointer as far as the result it produces
	 *
	 * The only difference in Call by Reference is we need to give different local name for a variable
	 * for the same location in memory
	 */


	/****** Problem 6 test case ********/
	cout << "\t\tProblem 6 test case " << endl;
    int num1 = 10;
    int num2 = 20;
    cout << "\tBefore calling the function... " << endl;
    cout << "Value in the first variable is " << num1 << endl;
    cout << "Value in the second variable is " << num2 << endl;
    cout << endl;

    changeValue(&num1,&num2);

    cout << "\tAfter calling the function... " << endl;
    cout << "Value in the first variable is " << num1 << endl;
    cout << "Value in the second variable is " << num2 << endl;
    cout << endl;

    /****** Problem 7 test case ********/
    cout << "\t\tProblem 7 test case " << endl;
    char a = 'o';
    char b = 'y';
    char c = 'm';
    char d = 'e';
    char e = 'n';
    char f = 'r';
    char g = 't';

    cout << "\tWord before calling function... " << endl;

    // money tree
    cout << c << a << e << d << b << " " << g << f << d << d << endl;
    cout << endl;

    createWord(a,&c,g);

    cout << "\tWord after calling function... " << endl;

    // honeybee
    cout << c << a << e << d << b << g << d << d << endl;
    cout << endl;

    /****** Problem 8 test case ********/
    // cout << "\t\tProblem 8 test case " << endl;
    // printSwapValues();

    return 0;
}

void printValue(){
	/***
	 * Method prints value and address of the local variable
	 * Parameters: None
	 * Return type: None
	 */

	int num = 4;
	cout << "Value of the variable is " << num << endl;
	cout << "Address of the variable is " << &num << endl;
	cout << endl;
}

void printValue2(int value){
	/***
	 * Method increments given input parameter value by 4
	 * and prints its value and address
	 *
	 * Parameters: value; an integer
	 * Return type: Void(None)
	 *
	 */
	value = value + 4;
	cout << "Value of the variable is " << value << endl;
	cout << "Address of the variable is " << &value << endl;
	cout << endl;
}

int randNumValue(){
	/***
	 * Method prints out value and address of a random integer variable
	 * between 0 and 50(excluding 50) and returns it
	 * Parameters: None
	 * Return type: Integer
	 */
	int j = rand() % 50; //Random number between 0 and 50(excluding 50)
	cout << "Value of the variable is " << j << endl;
	cout << "Address of the variable is " << &j << endl;
	cout << endl;

	return j;
}

void cubeNum(int *num){
	/***
	 * Method cubes the value at the address in the parameter and prints
	 * its value and address
	 *
	 * Parameters: num; an address of an integer
	 * Return type: Void(None)
	 */
	*num = (*num) * (*num) * (*num);
	cout << "Value at the address is " << *num << endl;
	cout << "Address in the parameter is " << num << endl;
	cout << endl;
}

void addRandValue(int &num){
	/***
	 *  Method creates a random number between 0 and 10 and adds it to the input parameter.
	 *
	 *  Method also prints out that random number, new value after adding random number, and
	 *  address of the input parameter
	 *
	 *  Parameters: num; alias of an integer
	 *  Return type: Void(None)
	 */

	int randValue = rand() % 11;//Random number between 0 and 10
	num = num + randValue;
	cout << "Random number: " << randValue << endl;
	cout << "New value of the variable is " << num << endl;
	cout << "Address of the variable is " << &num << endl;
	cout << endl;
}

void changeValue(int *num1, int *num2){
	/***
	 * Method changes values of both addresses of an integer to 32 and 42 respectively
	 * by creating a local variable and storing address of both variables individually.
	 *
	 * Parameters: num1; an address of an integer
	 *             num2; an address of an integer
	 *
	 * Return type: Void(None)
	 */

	int *var;
	var = num1; // Address in the first parameter
	*var = 32;  // Value at the address in the first parameter

	var = num2; // Address in the second parameter
	*var = 42;  // Value at the address in the second parameter

}

void createWord(char c1, char *c2, char &c3){
	/***
	 * Method uses call by value, call by pointer, and call by reference to change existing word to
	 * a new one
	 *
	 * Parameters: c1; a character
	 *             c2; a character
	 *             c3; a character
	 *
	 * Return type: Void(None)
	 */

	c1 = 'a';
	*c2 = 'h';
	c3 = 'b';
}

bool isSwap(int *num1, int *num2){
	/***
	 * Method determines whether or not the given input parameters were swapped
	 *
	 * Parameters: num1; an address of an integer
	 *             num2; an address of an integer
	 *
	 * Return type: Boolean
	 */
	int temp;

	if(*num1 > *num2){
		temp = *num1;
		*num1 = *num2;
		*num2 = temp;
		return true;
	}

	return false;
}

void printSwapValues(){
	/***
	 * Method loops 20 times while generating two random numbers and
	 * printing swapped values if the two values were swapped
	 *
	 * Parameters: None
	 * Return type: None
	 */
	int num1;
	int num2;
	bool hasSwap;

	for(int i = 0; i < 20 ; i++){
		num1 = rand() % 26;
		num2 = rand() % 26;

		cout << "\tTrial " << i + 1 << endl;
		cout << endl;
		cout << "Random value 1 is " << num1 << endl;
		cout << "Random value 2 is " << num2 << endl;
		cout << endl;

		hasSwap = isSwap(&num1,&num2);

		if(hasSwap){
			cout << "\tAfter swapping... " << endl;
			cout << "Random value 1 is " << num1 << endl;
			cout << "Random value 2 is " << num2 << endl;
			cout << endl;
		}
	}
}
