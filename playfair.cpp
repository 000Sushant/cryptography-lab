#include "iostream"
using namespace std;

int main()
{
    char arr[6][6] = {"MONAR", "CHYBD", "EFGIK", "LPQST", "UVWXZ"};
    char pt[10];
    int i, j, r1 = 0, r2 = 0, c1 = 0, c2 = 0;

    // printing the 2d key array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter your plain text:";
    getline(pt, 10);

    cout << "Your plain text: " << pt;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == pt[0])
            {
                r1 = i;
                c1 = j;
            }
            if (arr[i][j] == pt[1])
            {
                r2 = i;
                c2 = j;
            }
        }
    }
    if (r1 == r2) // when both characters in same row
    {
        if (c2 == 4) // for char in last column
            printf("Ciphertext = %c%c \n", arr[r1][c1 + 1], arr[r2][0]);
        else
            printf("Ciphertext = %c%c \n", arr[r1][c1 + 1], arr[r2][c2 + 1]);
    }
    if (c1 == c2) // when both characters in same column
    {
        if (r2 == 4) // for char in last row
            printf("Ciphertext = %c%c \n", arr[r1 + 1][c1], arr[0][c2]);
        else
            printf("Ciphertext = %c%c \n", arr[r1 + 1][c1], arr[r2 + 1][c2]);
    }
    // when characters are not in a same row and column
    if (r1 != r2 && c1 != c2)
    {
        printf("\nCiphertext = %c%c \n", arr[r1][c2], arr[r2][c1]);
    }

    return 0;
}
