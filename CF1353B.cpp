// Two Arrays And Swaps
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

void Sum_After_Swap()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;

    vector_input(a, n);
    vector_input(b, n);

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());

    while (k--)
    {
        int index = b.size() - 1;
        if (b.back() > a[index])
        {
            swap(b.back(), a[index]);
            b.pop_back();
        }
        else
            break;
    }

    lli sum = 0;
    while (n--)
    {
        sum += a.back();
        a.pop_back();
    }

    cout << sum << endl;
}

void Caller()
{
    int n;
    cin >> n;
    while (n--)
    {
        Sum_After_Swap();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}
