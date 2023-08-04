#include <iostream>

using namespace std;

int main() {
	size_t submit[31]{0}, notSubmit[31]{0};
	bool match = false;
	for (size_t i = 0; i < 28; i++)
	{
		cin >> submit[i];
	}

	for (size_t k = 1; k < 31; k++)
	{
		match = false;
		for (size_t i = 0; i < 28; i++)
		{
			if (k == submit[i])
			{
				match = true;
				break;
			}
			else if (!match && i == 27)
			{
				notSubmit[k] = k;
			}
		}
	}

	for (size_t i = 0; i < 31; i++)
	{
		if (notSubmit[i] != 0)
		{
			cout << notSubmit[i] << endl;
		}
	}
	return 0;
}