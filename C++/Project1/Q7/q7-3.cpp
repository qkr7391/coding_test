#include <iostream>

using namespace std;

int main() {
	size_t n, j = 0;
	string s;
	char arr[100]{ 0 };
	cin >> n;
	
	for (size_t i = 0; i < n; i++)
	{
		cin >> s;
		arr[i+j] = s[0];
		arr[i + j + 1] = s[s.length() - 1];
		arr[i + j + 2] = '\n';
		j += 2;		
	}

	for (size_t i = 0; i < 100; i++)
	{
		if (arr[i != '\0'])
		{
		 cout << arr[i];
		}
		if (arr[i] == '\n' && arr[i+1] == '\0')
		{
			break;
		}
	}

	return 0;
}