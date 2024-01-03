// Divisibility Problem
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

#define lli long long int

void Divisibility()
{
    lli a, b;
    cin >> a >> b;
    cout << b * ((lli)ceil(a / (double)b)) - a << endl;
}

void Caller()
{
    int n;
    cin >> n;
    while (n--)
    {
        Divisibility();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}
