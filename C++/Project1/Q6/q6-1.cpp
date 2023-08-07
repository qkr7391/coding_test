#include <iostream>

using namespace std;

int main() {
	size_t n, v, count = 0, arr[100];

	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cin >> v;


	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == v)
		{
			count++;
		}
	}
	
	cout << count;

	return 0;
}