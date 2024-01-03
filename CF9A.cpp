// Die Roll
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

#define lli long long int

void Fraction()
{
    lli a, b;
    cin >> a >> b;

    lli numerator = (6 - max(a, b) + 1);
    lli denominator = 6;
    bool b_ctrl = true;
    while (b_ctrl)
    {
        if (numerator % 2 == 0 && denominator % 2 == 0)
        {
            numerator /= 2;
            denominator /= 2;
        }
        else if (numerator % 3 == 0 && denominator % 3 == 0)
        {
            numerator /= 3;
            denominator /= 3;
        }
        else
            b_ctrl = false;
    }

    cout << numerator << "/" << denominator << endl;
}

int main(int argc, char const *argv[])
{
    Fraction();

    return 0;
}
