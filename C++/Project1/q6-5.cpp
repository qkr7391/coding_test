#include <iostream>

using namespace std;

int main(void)
{
    int n, m, arr[100]{0}, i, j, k;

    cin >> n >> m;
    
    for (int p = 0; p < m; p++)
    {
        cin >> i >> j >> k;
        for (int l = i; l <= j; l++)
        {
            arr[l-1] = k;
        }
    }

    for (int u = 0; u < n; u++)
    {
        cout << arr[u] << " ";
    }
    return 0;
}

