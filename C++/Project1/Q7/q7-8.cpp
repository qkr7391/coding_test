#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 0;
	
	string s;
	getline(cin, s);

	for (size_t i = 0; i < s.length(); i++)
	{		
		if (s[i] == ' ') {
			cnt++;
		}
	}
	if (s[0] == ' ')
	{
		cnt -= 1;
	}
	if (s[s.length() - 1] == ' ')
	{
	cnt -= 1;
	}

	cout << cnt+1;

	return 0;
}