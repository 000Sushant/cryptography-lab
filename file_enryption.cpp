// write a c++ program to implement the file encryption

#include "iostream"
#include "string"
#include "fstream"
using namespace std;

int main()
{
    string FN = "SUSHANT";
    string LN = "KUMAR";
    string DOB = "05022002";
    string ip_password;
    char ch[100];
    // string password = FN.substr(0, 2) + LN.substr(0, 2) + DOB;
    string password = "123";
    cout << "Enter password\n";
    cin >> ip_password;

    if (ip_password == password)
    {
        fstream fin;
        fin.open("user_info.txt", ios::in);
        while (!fin.eof())
        {
            fin.getline(ch, 100);
            cout << ch << endl;
            // fflush(stdout);
        }
        fin.close();
    }
    else
    {
        cout << "wrong password";
    }

    return 0;
}
