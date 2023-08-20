#include <iostream>

using namespace std;

int main() {
	char a[4], b[4];
	char temp1[3]{ 0 }, temp2[3]{ 0 };
	int rev1 = 2, rev2 =2;

	cin >> a >> b;
	for (size_t i = 0; i < 3; i++)
	{
		temp1[i] = a[rev1--];
		temp2[i] = b[rev2--];
	}
	for (size_t i = 0; i < 3; i++)
	{
		a[i] = temp1[i];
		b[i] = temp2[i];
	}
	for (size_t i = 0; i < 3; i++)
	{
		if (a[0] < b[0])
		{
			cout << b[i];
		}
		else if (a[0] > b[0])
		{
			cout << a[i];
		}
		else
		{
			if (a[1] < b[1])
			{
				cout << b[i];
			}
			else if (a[1] > b[1])
			{
				cout << a[i];
			}
			else
			{
				if (a[2] < b[2])
				{
					cout << b[i];
				}
				else if (a[2] > b[2])
				{
					cout << a[i];
				}
			}
		}
	}

	return 0;
}