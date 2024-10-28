#include <iostream>

using namespace std;

void example(int& apple, int ball, int cat)
{
	cout << "In example function" << endl;
	cout << "a = " << apple << endl;
	cout << "b = " << ball << endl;
	cout << "c = " << cat << endl;

	apple = ball + cat;
	ball = apple + cat;
	cat = apple + ball;

	cout << "After changing values" << endl;
	cout << "a = " << apple << endl;
	cout << "b = " << ball << endl;
	cout << "c = " << cat << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	cout << "In main function" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	example(a, b, c);

	cout << "After calling example function" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}