#include "iostream"
#include "fstream"
#include "string.h"

using namespace std;

int main()
{
    ofstream fout;
    fout.open("monoAplha.txt", ios::out);
    fout << "Cryptography Technique";
    fout.close();

    char p[100];
    char c[100];
    ifstream fin;
    fin.open("monoAplha.txt", ios::in);
    fin.getline(p, 100);
    fin.close();
    strrev(p);

    int i;
    for (i = 0; p[i] != '\0'; i++)
    {
        if (p[i] > 'a' && p[i] < 'z')
        {
            p[i] = p[i] - 32;
        }
    }
    cout << "Text: " << p << endl;

    char alphabet[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    // Create replacement key according to which you want to encrypt
    char replacement[53] = {'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A'};

    for (int i = 0; p[i] != '\0'; i++)
    {
        for (int j = 0; j < 26; j++)
            if (p[i] == alphabet[j])
                c[i] = replacement[j];
    }

    cout << "Encryted Message:" << c << endl;
}