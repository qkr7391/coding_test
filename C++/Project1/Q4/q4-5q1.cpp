#include <iostream>

using namespace std;

int main() {
	int h{}, m{};
	int temp{};
	cin >> h >> m;

	if (h == 0 && (m >=0 || m < 45))
	{
		h = 23;
		m = m - 45 + 60;
		if (m == 60)
		{
			m = 0;
		}
	}
	else
	{
		temp = (h * 60 + m) - 45;
		h = temp / 60;
		m = (temp - 60 * h);
	}

	cout << h << " " << m;
	return 0;
}