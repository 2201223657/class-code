//王泉栋 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	cout << "*********" << endl;
	for (int i = 1; i <= 7; i++) {
		cout << "*       *" << endl;		//矩形。
	}
	cout << "*********\n" << endl;

	cout << "   ***   " << endl;
	cout << " *     *" << endl;
	for (int i = 1; i <= 5; i++) {
		cout << "*       *" << endl;		//椭圆。
	}
	cout << " *     *" << endl;
	cout << "   ***   \n" << endl;

	cout << "  *  " << endl;
	cout << " *** " << endl;
	cout << "*****" << endl;				//箭头。
	for (int i = 1; i <= 6; i++) {
		cout << "  *  " << endl;
	}
	cout << endl;

	cout << "    *    " << endl;
	cout << "   * *   " << endl;
	cout << "  *   *  " << endl;
	cout << " *     * " << endl;
	cout << "*       *" << endl;			//菱形。
	cout << " *     * " << endl;
	cout << "  *   *  " << endl;
	cout << "   * *   " << endl;
	cout << "    *    " << endl;
	return 0;
}