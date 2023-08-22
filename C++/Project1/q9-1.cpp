#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string s;
	int a, sum=0;

	cin >> s >> a;
	for (size_t i = 0; i < s.size(); i++)
	{
		if ('0' <= s[i] && s[i] <= '9')
		{
			sum += (s[i] - '0') * pow(a, (s.size() - i - 1));
		}
		else 
		{

			sum += (s[i] - 'A' + 10) * pow(a, (s.size() - i - 1));
		}
		
	}
	cout << sum;

	return 0;
}