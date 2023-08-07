#include <iostream>

using namespace std;

int main(void)
{
    int n, m, arr[100]{ 0 }, i, j, temp;

    for (int t = 0; t < 100; t++)
    {
        arr[t] = t+1;
    }

    cin >> n >> m;

    for (int p = 0; p < m; p++)
    {
        cin >> i >> j;
        temp = arr[i-1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }

    for (int u = 0; u < n; u++)
    {
        cout << arr[u] << " ";
    }
    return 0;
}