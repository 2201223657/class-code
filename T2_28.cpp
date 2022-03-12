//ÍõÈª¶° 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,e,f;
	cin >> a;
	b = a / 10000;
	c = a % 10000 / 1000;
	d = a % 1000 / 100;
	e = a % 100 / 10;
	f = a % 10;
	cout << b << " " << c << " " << d << " " << e << " " << f;
	return 0;
}