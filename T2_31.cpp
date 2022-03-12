//ÍõÈª¶° 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cout << "Input total miles driven per day:" << endl;
	cin >> a;
	cout << "Input the price of gasoline per gallon" << endl;
	cin >> b;
	cout << "The average number of miles per gallon of gasoline can drive" << endl;
	cin >> c;
	cout << "Daily parking fees" << endl;
	cin >> d;
	cout << "Daily tolls" << endl;
	cin >> e;
	cout << "\n" << endl;
	cout << "Driving costs per day :" << a / c * b + d + e << endl;
	return 0;
}