#include <iostream>

using namespace std;

void ExampleFunction();		// Function Prototype

int main()
{
	ExampleFunction();		// Function Call

	return 0;
}

void ExampleFunction()
{
	cout << "I am in the function!\n\n";
}