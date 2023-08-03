#include <iostream>
using namespace std;

int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    size_t a, b, num;

    cin >> num;
    

#define ex2
#define ex3
#define ex4


#ifdef ex2
    for (size_t i = 0; i < num; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
#endif // ex2

#ifdef ex3
    for (size_t i = 0; i < num; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a + b << "\n";
    }
#endif // ex3

#ifdef ex4
    for (size_t i = 0; i < num; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
    }
#endif // ex4

   
    
    return 0;
}