#include <iostream>

using namespace std;

int main() {
	int A{}, sum{};

	cin >> A;

	for (int i = 0; i < A+1; i++)
	{
		sum += i;
	}
	cout << sum;

	return 0;
}