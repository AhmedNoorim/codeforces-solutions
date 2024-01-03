#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    unsigned int toast_on_drinks = (k * l) / nl;

    unsigned int toast_on_lime = c * d;

    unsigned int toast_on_salt = p / np;

    cout << (int)fmin(fmin(toast_on_drinks, toast_on_lime), toast_on_salt) / n;

    return 0;
}
