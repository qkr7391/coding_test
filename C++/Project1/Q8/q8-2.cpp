#include <iostream>

using namespace std;

int main() {
	size_t q[9][9], max = 0, a=0,b=0;

	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			cin >> q[i][j];
			if (q[i][j] > max)
			{
				max = q[i][j];
				a = i;
				b = j;
			}
		}
	}
	cout << max << endl;
	cout << a + 1 << " " << b + 1;

	return 0;
}