#include <iostream>

using namespace std;

int main() {
	size_t n, v, count = 0, arr[10000]{ 0 };

	cin >> n;

	cin >> v;

	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}



	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] < v)
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}