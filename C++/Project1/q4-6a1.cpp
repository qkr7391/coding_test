#include <iostream>

using namespace std;

int main() {
	int h{}, m{}, cooking{}, temp{};

	cin >> h >> m >> cooking;
	temp = h * 60 + m + cooking;
	h = temp / 60;
	m = temp - 60 * h;
	if (h >= 24)
	{
		h = h - 24;
	}
	cout << h << " " << m;
	return 0;
}