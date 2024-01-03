// Balanced Array
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

void printVector(vector<lli> &v)
{
    for (auto &c : v)
    {
        cout << c << " ";
    }
    cout << endl;
}

void vectorInputLeft(vector<lli> &v, int n)
{
    lli even = 2;
    while (n--)
    {
        v.push_back(even);
        even += 2;
    }
}
void vectorInputRight(vector<lli> &v, int n)
{
    lli last = v.back() + n - 1;
    lli odd = 1;
    while (--n)
    {
        v.push_back(odd);
        odd += 2;
    }
    v.push_back(last);
}

void balancedArray()
{
    lli n;
    cin >> n;
    vector<lli> arr;
    vectorInputLeft(arr, n / 2);
    vectorInputRight(arr, n / 2);

    if (n == 2 || arr.back() % 2 == 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        printVector(arr);
    }
}

void caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        balancedArray();
    }
}

int main(int argc, char const *argv[])
{
    caller();
    return 0;
}
