#include <iostream>

using namespace std;

int main() {
	int n = 0, score[1000]{0}, m = 0;
	double sum = 0.0, avg = 0.0;

	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> score[i];
		if (score[i] > m)
		{
			m = score[i];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		score[i] = (score[i]* 100) / m;
		sum += score[i];
	}
	avg = sum / n;
	cout << fixed;
	cout.precision(6);
	cout << avg;

	return 0;
}