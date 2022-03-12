//ÍõÈª¶° 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << " Input three integers:";
	cin >> a >> b >> c;
	cout << " Sum is " << a + b + c << endl;
	cout << " Average is " << (a + b + c) / 3 << endl;
	cout << " Product is " << a * b*c << endl;
	if (a < b) {
		if (a < c) {
			cout << " Smallest is " << a << endl;
		}
		else {
			cout << " Smallest is " << c << endl;
		}
	}
	else {
		if (b < c) {
			cout << " Smallest is " << b << endl;
		}
		else {
			cout << " Smallest is " << c << endl;
		}
	}
	if (a > b) {
		if (a > c) {
			cout << " Largest is " << a << endl;
		}
		else {
			cout << " Largest is " << c << endl;
		}
	}
	else {
		if (b > c) {
			cout << " Largest is " << b << endl;
		}
		else {
			cout << " Largest is " << c << endl;
		}
	}
	return 0;
}