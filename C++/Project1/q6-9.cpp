#include <iostream>

using namespace std;

int main() {
	size_t n, m, k, u, basket[100]{0}, temp;

	cin >> n >> m;

	for (size_t i = 1; i < n+1; i++)
	{
		basket[i] = i;
	}

	while (m--)
	{
		cin >> k >> u;
		for (size_t t = 0; t <= (u-k)/2; t++)
		{
			temp = basket[k+t];
			basket[k + t] = basket[u-t];
			basket[u-t] = temp;
		}
	}
	for (size_t i = 1; i < n+1; i++)
	{
		cout << basket[i] << " ";
	}
	return 0;
}