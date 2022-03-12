//王泉栋 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	cout << "* * * * * * * *" << endl;		//八条语句输出的所示图案。
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "\n" << endl;;
	//尽可能少的语句输出所示图行。
	for (int i = 1; i <= 4; i++) {
		cout << "* * * * * * * *" << endl;
		cout << " * * * * * * * *" << endl;
	}
	return 0;
}