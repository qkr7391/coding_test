#include <iostream>

using namespace std;

int main() {
	size_t a, b;
	size_t q[100][100], p[100][100];

	cin >> a >> b;

	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			cin >> q[i][j];
		}
	}
	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			cin >> p[i][j];
		}
	}

	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			cout << q[i][j] + p[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}