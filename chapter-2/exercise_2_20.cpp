#include <iostream>

using namespace std; // using the standard namespace

/**
 * main - pointer exercise output
 * return: 0
 */
int main(){
	int i = 42, *pi = &i; // define the variables

	*pi = *pi * *pi; // assign a new value to variable i memory adress

	cout << i << " " << endl; // print the new value to the stdout

	return 0;
}
