// Divide and Conquer
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

lli vectorInput(vector<lli> &v, lli n, lli &lowEven, lli &lowOdd)
{
    lli sum = 0;
    lowEven = lowOdd = __LONG_LONG_MAX__;
    while (n--)
    {
        lli in;
        cin >> in;
        v.push_back(in);
        sum += in;
        if (in % 2 == 0)
        {
            if (in < lowEven)
                lowEven = in;
        }
        else
        {
            if (in < lowOdd)
                lowOdd = in;
        }
    }
    return sum;
}

void divideAndConquer()
{
    lli n;
    cin >> n;
    vector<lli> b;

    lli low_even, low_odd;
    lli sum = vectorInput(b, n, low_even, low_odd);

    lli count = 0;
    if (b.size() > 1)
    {
        while (sum % 2 != 0)
        {
            ++count;
            low_even /= 2;
            low_odd /= 2;
            if (low_even % 2 == 1 || low_odd % 2 == 0)
                break;
        }
    }
    else
    {
        while (sum % 2 != 0)
        {
            ++count;
            sum /= 2;
        }
    }

    cout << count << endl;
}

void caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        divideAndConquer();
    }
}

int main(int argc, char const *argv[])
{
    caller();
    return 0;
}
