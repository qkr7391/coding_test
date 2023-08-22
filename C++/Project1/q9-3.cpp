#include <iostream>

using namespace std;

int main() {
	int n = 0, q = 0, d = 0, p = 0, mny = 0, nk = 0;


	cin >> n;
	while (n != 0)
	{
		cin >> mny;

		if (mny >= 25)
		{
			q = mny / 25;
			mny = mny % 25;
		}
		if (mny >= 10)
		{
			d = mny / 10;
			mny = mny % 10;
		}
		if (mny >= 5)
		{
			nk = mny / 5;
			mny = mny % 5;
		}
		p = mny;
		n--;
		cout << q << " " << d << " " << nk << " " << p << endl;
		q = 0, d = 0, p = 0, mny = 0, nk = 0;
	}


	return 0;
}