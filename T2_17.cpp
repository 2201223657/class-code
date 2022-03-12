//王泉栋 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	cout << "1 2 3 4 \n";		// a) 一条语句，一个流插入运算符

	cout << "1 " << "2 " << "3 " << "4 \n";		//  b) 一条语句，四个流插入运算符

	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4 ";		//  c) 四条语句
	return 0;
}