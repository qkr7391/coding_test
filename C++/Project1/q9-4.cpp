#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n = 0;
	int sum = 0;
	int pvalue = 0;
	cin >> n;

	if (n == 0)
	{
		sum = 4;
	}
	else if (n > 0)
	{
		for (size_t i = 0; i < n; i++)
		{
			pvalue += pow(2, i);
		}

		sum = pow((2 + pvalue), 2);
	}
	cout << sum;
	return 0;
}