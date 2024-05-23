// Gifts Fixing
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
#include <algorithm>
using namespace std;

#define lli long long int

void vector_input(vector<lli> &v, int n, lli &min)
{
    while (n--)
    {
        int in;
        cin >> in;
        v.push_back(in);
        if (in < min)
            min = in;
    }
}

void Gift_Fixing()
{
    int n;
    cin >> n;
    vector<lli> candies;
    vector<lli> oranges;

    lli minCandies = __LONG_LONG_MAX__, minOranges = __LONG_LONG_MAX__;

    vector_input(candies, n, minCandies);
    vector_input(oranges, n, minOranges);

    lli steps = 0;
    while (!candies.empty())
    {
        if (candies.back() >= minCandies && oranges.back() == minOranges)
        {
            steps += candies.back() - minCandies;
        }
        else if (candies.back() == minCandies && oranges.back() >= minOranges)
        {
            steps += oranges.back() - minOranges;
        }
        else
        {
            lli diffCandies = candies.back() - minCandies;
            lli diffOranges = oranges.back() - minOranges;
            steps += ((abs(diffCandies - diffOranges) + min(diffCandies, diffOranges)));
        }

        candies.pop_back();
        oranges.pop_back();
    }

    cout << steps << endl;
}

void Caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        Gift_Fixing();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}