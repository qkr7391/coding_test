#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, AtoZ="abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	

	for (size_t i = 0; i < AtoZ.length(); i++)
	{
		cout << (int)s.find(AtoZ[i]) << " ";
	}
	return 0;
}