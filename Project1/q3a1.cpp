#include <iostream>
using namespace std;
int main() {
	char ID[50] = "";
	cin >> ID;

	for (size_t i = 0; ID[i] != '\0'; i++)
	{
		cout << ID[i];
	}
	cout << "??!";

	return 0;
}