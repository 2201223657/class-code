//ÍõÈª¶° 2112080101 2022.3.12
#include <iostream>
using namespace std;
int main() {
	cout << "BMI VALUES" << endl;
	cout << "Underweight : less than 18.5" << endl;
	cout << "Normal :      between 18.5 and 24.9" << endl;
	cout << "Overweight :  between 25 and 29.9" << endl;
	cout << "Obese :       30 or greater" << endl;
	double height, weight;
	cout << "Input your height and weight :" << endl;
	cin >> height >> weight;
	cout << "Your BMI is " << weight / (height *height) << endl;
	return 0;
}