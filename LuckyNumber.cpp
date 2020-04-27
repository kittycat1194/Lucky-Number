#include <iostream>
#include <conio.h>

using namespace std;

void main() {
	int number;
	cout << "Please enter a 6 digit number: \n";
	cin >> number;
	int d1, d2, d3, d4, d5, d6;
	d1 = number / 100000;
	d2 = number % 100000 / 10000;
	d3 = number % 10000 / 1000;
	d4 = number % 1000 / 100;
	d5 = number % 100 / 10;
	d6 = number % 10;
	if ((d1 + d2 + d3) == (d4 + d5 + d6)) {
		cout << "Your number is lucky!\n";
	}
	else
		cout << "Your number is not lucky =(\n";
	_getch();
}