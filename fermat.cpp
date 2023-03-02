#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    int p;
    int a;
    cout << "Enter the value of a and p\n";
    cin >> a >> p;

    // checking if fermat is applicable on the values
    if (a > 0 && p > 1 && a % p != 0)
    {
        for (int i = 2; i < p - 1; i++)
        {
            if (p % i == 0)
            {
                cout << "p is not prime, fermat theorem is not applicable";
                return 0;
            }
        }
    }
    else
    {
        cout << "fermat theorem not applicable";
        return 0;
    }

    int x = pow(a, p - 1);
    if (x % p == 0)
    {
        cout << "fermat theorem not applicable";
    }
    cout << "fermat theorem is applicable\n";

    return 0;
}
