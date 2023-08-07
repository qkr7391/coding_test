#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, sum=0;
	string s;
	char arr[100];

	cin >> n;
	cin >> s;

	for (size_t i = 0; i < n; i++)
	{
		sum += (s[i] - '0');
	}
	cout << sum;
	return 0;
}