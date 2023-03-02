#include <iostream>
#include <string.h>
using namespace std;

int multiplicativeInverse(int number, int m1)
{
    int multiInverse;
    for (int i = 1; i <= number; i++)
    {

        multiInverse = (i * m1) + 1;
        if (multiInverse % number == 0)
            break;
    }
    multiInverse /= number;
    return multiInverse;
}

int main()
{
    int a1, a2, a3, m1, m2, m3, M, M1, M2, M3, X1, X2, X3, X;
    cout << "Enter the value of a1, a2, a3:" << endl;
    cin >> a1 >> a2 >> a3;
    cout << "Enter the value of m1, m2, m3:" << endl;
    cin >> m1 >> m2 >> m3;

    M = m1 * m2 * m3;
    M1 = M / m1;
    M2 = M / m2;
    M3 = M / m3;

    X1 = multiplicativeInverse(M1, m1);
    X2 = multiplicativeInverse(M2, m2);
    X3 = multiplicativeInverse(M3, m3);

    X = (M1 * X1 * a1 + M2 * X2 * a2 + M3 * X3 * a3) % M;
    cout << X;
}