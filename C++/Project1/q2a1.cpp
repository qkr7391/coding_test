#include <iostream>
using namespace std;
int main() {
	int A{}, B{};
	double val;
	cin >> A >> B;
	val = (double)(A) / (double)(B);

	cout << fixed;
	cout.precision(9);
	cout << val;


		//double A, B;
		//cin >> A >> B;

		//cout << fixed;
		//cout.precision(9);
		//cout << A / B;



	return 0;
}