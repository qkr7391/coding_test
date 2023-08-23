#include <iostream>

using namespace std;

int main() {
	int v, a, b;
	int i = 0;
	int daily = 0;

	cin >> a >> b >> v;

	while (daily > 0 || v > 0)
	{
		++i;
		daily = v - a;
		if (daily <= 0) break;
		daily += b;
		v = daily;
	}


	cout << i;
	return 0;
}
