// Drinks
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

#define lli long long int

// taking a input in a vector
long double vectorInput(vector<long double> &v, int n)
{
    long double sum = 0;
    while (n--)
    {
        long double in;
        cin >> in;
        v.push_back(in);
        sum += v.back();
    }

    return sum;
}

void drinks()
{
    lli n;
    cin >> n;
    vector<long double> volume_fraction;

    long double sum = vectorInput(volume_fraction, n) * 100;
    long double total = 100 * n;

    cout << fixed << setprecision(12) << sum / total << endl;
}

int main(int argc, char const *argv[])
{
    drinks();

    return 0;
}
