#include <iostream>


using namespace std; // using the standard namespace
/**
 * main - check the output of the program using referencing
 * returns: 0
 */
int main(){
	int i = 5, &ri = i; // defining the variables i and ri
	ri = 10; // assign a new value to the variable referenced by ri

	cout << i << " " << ri << endl;

	return 0;
}
