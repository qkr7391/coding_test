#include <iostream>

using namespace std;

int q[100][100];

int main() {
	int n, a, b, sq=0;

	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> a >> b;
		for (size_t k = a; k < a+10; k++)
		{
			for (size_t j = b; j < b+10; j++)
			{
				if (!q[k][j])
				{
					sq++;
					q[k][j] = 1;
				}
			}

		}
	}
	cout << sq;

	return 0;
}