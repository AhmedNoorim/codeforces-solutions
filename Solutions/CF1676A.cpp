#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void Yes_Checker(int &var)
{
    if (var == 0)
    {
        cout << "YES" << endl;
        return;
    }
    int left = 0, right = 0;
    int i = 6;
    while (var != 0)
    {
        if (i > 3)
        {
            right += var % 10;
        }
        else
        {
            left += var % 10;
        }
        var /= 10;
        --i;
        // cout << var << endl;
        // cout << left << " " << right << endl;
    }

    cout << (left == right ? "YES" : "NO") << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int int_var;
    for (int i = 0; i < n; i++)
    {
        cin >> int_var;
        Yes_Checker(int_var);
    }

    return 0;
}
