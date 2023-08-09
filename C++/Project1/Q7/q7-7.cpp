#include <iostream>
#include <string>

using namespace std;

int main() {
	//a1 - repeat cout
	/*size_t t, r;
	string s;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> r >> s;
		for (size_t j = 0; j < s.length(); j++)
		{
			for (size_t k = 0; k < r; k++)
			{
				cout << s[j];
			}
		}
	}*/

	//a2 - new string
	size_t t, r, cnt = 0, temp = 0;
	string s, p="";
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> r >> s;
		for (size_t j = 0; j < s.length(); j++)
		{
			temp = r;
			while (temp--)
			{
				p.back() = s[j];
				
			}
		}
	}
	cout << p;
	return 0;
}