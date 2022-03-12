//王泉栋 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "input two numbers :";
	cin >> a >> b;
	if (a%b == 0) {
		cout << "第一个数是第二个数的倍数。";
	}
	else {
		cout << "第一个数不是第二个数的倍数。";
	}
	return 0;
}