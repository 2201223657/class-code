//ÍõÈª¶° 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	cout << "input five numbers : ";
	int a, b, c, d ,e ;
	cin >> a >> b >> c >> d >> e ;
	if (a > b&&a > c&&a > d&&a > e) {
		cout << "Largest is " << a << endl;
	}
	else if (b > a&&b > c&&b > d&&b > e) {
		cout << "Largest is " << b << endl;
	}
	else if (c > b&&c > a&&c > d&&c > e) {
		cout << "Largest is " << c << endl;
	}
	else if (d > b&d > c&&d > a&&d > e) {
		cout << "Largest is " << d << endl;
	}
	else if (e > b&&e > c&&e > d&&e > a) {
		cout << "Largest is " << e << endl;
	}

	if (a < b&&a < c&&a < d&&a < e) {
		cout << "Smallest is " << a << endl;
	}
	else if (b < a&&b < c&&b < d&&b < e) {
		cout << "Smallest is " << b << endl;
	}
	else if (c < a&&c < b&&c < d&&c < e) {
		cout << "Smallest is " << c << endl;
	}
	else if (d < a&&d < c&&d < b&&d < e) {
		cout << "Smallest is " << d << endl;
	}
	else if (e < a&&e < c&&e < d&&e < b) {
		cout << "Smallest is " << e << endl;
	}
	return 0;
}