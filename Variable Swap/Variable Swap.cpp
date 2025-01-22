#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cout << "Define your first variable: ";
	cin >> x;
	cout << "Define your second variable: ";
	cin >> y;

	cout << "Variable 1 was: " << x << endl << "Variable 2 is was: " << y << endl;
	
	z = x;
	x = y;
	y = z;

	cout << "Variable 1 is now: " << x << endl << "Variable 2 is now: " << y;

	return 0;
}
