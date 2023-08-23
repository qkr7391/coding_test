#include <iostream>

using namespace std;

int main() {
	int n = 0;
	int result = 1;
	int i = 0;
	cin >> n;

	if (n == 1)
	{
		result = 1;
	}
	else {
		for (int sum = 2; sum <= n; i++)
			sum += 6 * i;
		result = i;
	}
	

	cout << result;

	return 0;
}