//王泉栋 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "请输入两个整数：";
	cin >> a >> b;
	if (a == b) {
		cout << "These numbers are equal.";
	}
	else {
		if (a > b) {
			cout << a << " is large.";
		}
		else {
			cout << b << " is large.";
		}
	}
	return 0;
}