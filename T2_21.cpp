//��Ȫ�� 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	cout << "*********" << endl;
	for (int i = 1; i <= 7; i++) {
		cout << "*       *" << endl;		//���Ρ�
	}
	cout << "*********\n" << endl;

	cout << "   ***   " << endl;
	cout << " *     *" << endl;
	for (int i = 1; i <= 5; i++) {
		cout << "*       *" << endl;		//��Բ��
	}
	cout << " *     *" << endl;
	cout << "   ***   \n" << endl;

	cout << "  *  " << endl;
	cout << " *** " << endl;
	cout << "*****" << endl;				//��ͷ��
	for (int i = 1; i <= 6; i++) {
		cout << "  *  " << endl;
	}
	cout << endl;

	cout << "    *    " << endl;
	cout << "   * *   " << endl;
	cout << "  *   *  " << endl;
	cout << " *     * " << endl;
	cout << "*       *" << endl;			//���Ρ�
	cout << " *     * " << endl;
	cout << "  *   *  " << endl;
	cout << "   * *   " << endl;
	cout << "    *    " << endl;
	return 0;
}