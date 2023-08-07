#include <iostream>

using namespace std;

int main() {
	size_t totalPrice{}, n{}, price{}, eachNum{}, sumPrice{};

	cin >> totalPrice >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> price >> eachNum;
		sumPrice += (price * eachNum);
	}

	if (totalPrice == sumPrice)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}