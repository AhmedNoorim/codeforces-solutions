// Petya and Strings
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str1, str2, up_str1, up_str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++)
    {
        up_str1 += toupper(str1[i]);
        up_str2 += toupper(str2[i]);
    }

    // cout << up_str1 << " " << up_str2 << endl;

    if (up_str1 == up_str2)
        cout << 0;
    else if (up_str1 < up_str2)
        cout << -1;
    else if (up_str1 > up_str2)
        cout << 1;

    return 0;
}
