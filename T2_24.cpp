//王泉栋 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "input a number : ";
	cin >> a;
	if (a % 2 == 0) {
		cout << "为偶数";
	}
	else {
		cout << "为奇数";
	}
	return 0;
}