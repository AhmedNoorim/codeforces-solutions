// Honest Coach
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
#include <algorithm>
using namespace std;

#define lli long long int

void vector_input(vector<int> &v, int n)
{
    while (n--)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }
}

void Honest_Coach()
{
    int n;
    cin >> n;
    vector<int> strength;

    vector_input(strength, n);

    sort(strength.begin(), strength.end());

    int dif = strength.back();
    while (--n)
    {
        int last = strength.back();
        strength.pop_back();
        if (abs(last - strength.back()) < dif)
            dif = abs(last - strength.back());
    }

    cout << dif << endl;
}

void Caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        Honest_Coach();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}