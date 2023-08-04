#include <iostream>

using namespace std;

int main() {
	size_t a, mod[10]{0}, cnt=0;

	for (size_t i = 0; i < 10; i++)
	{
		cin >> a;
		mod[i] = a % 42;
	}
	for (size_t i = 0; i < 10; i++)
	{	
		if (mod[i] != -1)
		{
			for (size_t j = i + 1; j < 11; j++)
			{
				if (mod[i] == mod[j])
				{
					mod[j] = -1;
				}
			}
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (mod[i] != -1)
		{
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}