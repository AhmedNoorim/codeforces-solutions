// Two Elevators
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

void elevators()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a - 1) < (abs(c - b) + c - 1))
        cout << 1 << endl;
    else if ((a - 1) == (abs(c - b) + c - 1))
        cout << 3 << endl;
    else
        cout << 2 << endl;
}

void caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        elevators();
    }
}

int main(int argc, char const *argv[])
{
    caller();
    return 0;
}
