#include <iostream>

using namespace std;

int main() {
	size_t n{}, times{};
	cin >> n;

	times = n / 4;
	for (size_t i = 0; i < times; i++)
	{
		cout << "long ";
	}
	cout << "int";

	return 0;
}