//��Ȫ�� 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	/*���ϵ�����
	cout << 'A' << endl;
	cout << static_cast<int>('A');*/
	char a;
	int b;
	cin >> a;
	b = static_cast<int>(a);
	cout << b << endl;
	return 0;
}