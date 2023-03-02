// not workin
// i/p: 10110101
// o/p: 10110101
#include <iostream>
using namespace std;

int main()
{
    char p[9];
    char k[9];
    char c[9];
    // int k;
    cout << "Enter your plain text\n";
    cin.getline(p, 9);

    fflush(stdin); // clear the input buffer

    cout << "Enter key\n";
    cin.getline(k, 9);

    int ch;
    int i;
    for (i = 0; i < 8; i++)
    {
        ch = p[i] ^ k[i];
        c[i] = int(ch);
        cout << c[i];
    }
    // cout << c;
    return 0;
}