#include <iostream>

using namespace std;

	char q[5][15];
int main() {

	for (size_t i = 0; i < 5; i++)
	{
		cin >> q[i];
	}

	for (size_t i = 0; i < 15; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (q[j][i] != NULL)
			{
				cout << q[j][i];
			}
		}
	}
	
	return 0;
}