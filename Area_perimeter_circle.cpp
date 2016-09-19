#include<iostream>
using namespace std;
void main() {
	
	float rad;
	double area;
	double parimeter;

	cout << "Enter Radius of Circle = ";
	cin >> rad;
	area = 3.14*rad*rad;
	parimeter = 2 * 3.14*area;

	cout << "Area of the circle is = " << area << endl;
	cout << "Parimeter of the circle is = " << parimeter << endl;

	system("pause");
}