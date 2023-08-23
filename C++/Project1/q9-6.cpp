#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int i = 0;
	while (n > 0)
	{
		++i; n -= i;
	}

	if (i % 2 == 1)
	{
		cout << 1 - n << "/" << i + n;
	}
	else
	{
		cout << i + n << "/" << 1 - n;
	}

	return 0;
}