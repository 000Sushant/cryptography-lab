#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char p[100];
    char c[100];
    char d[100];

    cout << "Enter your plain text\n";
    cin.getline(p, 100);
    int l = strlen(p);

    int i, j;

    // encryption
    for (i = 0, j = 0; i < l; i++)
    {
        if (i % 2 == 0)
        {
            c[j++] = p[i];
        }
    }

    for (i = 0; i < l; i++)
    {
        if (i % 2 == 1)
        {
            c[j++] = p[i];
        }
    }

    cout << "Encrypted Text: " << c << endl;

    // decryption
    int k;

    if (l % 2 == 0)
    {
        k = l / 2;
    }
    else
    {
        k = (l / 2) + 1;
    }

    for (i = 0, j = 0; i < k; i++)
    {
        d[j] = c[i];
        j += 2;
    }

    for (i = k, j = 1; i < l; i++)
    {
        d[j] = c[i];
        j += 2;
    }

    cout << "Decrypted Text: " << d;
    return 0;
}