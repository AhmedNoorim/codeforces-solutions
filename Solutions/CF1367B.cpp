// Even Array
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

#define lli long long int

void Even_Array()
{
    int n;
    cin >> n;
    vector<int> myArray;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        myArray.push_back(in);

        if (in % 2 == 0 && i % 2 != 0)
            ++even;
        else if (in % 2 == 1 && i % 2 != 1)
            ++odd;
    }

    cout << (even == odd ? even : -1) << endl;
}

void Caller()
{
    int t;
    cin >> t;
    while (t--)
    {
        Even_Array();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}
