#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s = "";
	int a, sum, temp;

	cin >> sum >> a;
	while (sum != 0)
	{
		temp = sum % a;
		if (temp < 10)
		{
			s.push_back(temp + '0');
		}
		else
		{
			temp -= 10;
			s.push_back(temp + 'A');
		}
		sum /= a;
	}
	reverse(s.begin(), s.end());
	cout << s;

	return 0;
}