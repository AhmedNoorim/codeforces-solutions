// Candies and Two Sisters
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

void Candies()
{
    int n;
    cin >> n;
    cout << (n % 2 == 0 ? (n / 2 - 1) : n / 2) << endl;
}

void Caller()
{
    int n;
    cin >> n;
    while (n--)
    {
        Candies();
    }
}

int main(int argc, char const *argv[])
{
    Caller();

    return 0;
}
