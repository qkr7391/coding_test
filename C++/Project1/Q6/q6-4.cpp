#include <iostream>

using namespace std;

int main(void)
{
    int num[9], max = 0, index = 0;

    
    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];

        if (i == 0)
        {
            max = num[i];
        }

        if (num[i] > max)
        {
            max = num[i];
            index = i + 1;
        }
    }
    cout << max << endl;
    cout << index;
    return 0;
}

