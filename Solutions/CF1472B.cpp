// Fair Division
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
#include <algorithm>
using namespace std;

#define lli long long int

void Fair_Division()
{
    lli sum = 0;
    int n;
    cin >> n;

    int buffer;
    for (int i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;
        buffer = weight;
        sum += weight;
    }

    if (sum % 2 != 0)
        cout << "NO" << endl;
    else
    {
        if (n % 2 != 0)
        {
            if (sum / buffer != n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}

void Caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        Fair_Division();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}