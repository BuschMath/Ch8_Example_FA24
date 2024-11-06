#include <iostream>

using namespace std;

void function(int a, int b, int& c)
{
	a++;
	b++;
	c++;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main()
{
	int a = 1, b = 2, c = 3;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	function(a, b, c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;	
	cout << "c = " << c << endl;

	cout << "&a = " << &a << endl;

	return 0;
}