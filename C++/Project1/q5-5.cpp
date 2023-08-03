#include <iostream>

using namespace std;

int main() {
	size_t a{};
	cin >> a;
	
	//1-1
	/*for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < a; j++)
		{
			if (i>=j)
			{
				cout << "*";
			}
		}
		cout << endl;
	}*/

	//1-2
	/*for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < a; j++)
		{
			if ((i + j) >= a-1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}*/
	return 0;
}