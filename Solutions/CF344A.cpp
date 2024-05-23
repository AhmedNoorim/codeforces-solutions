// Magnets
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

void magnets(lli number_of_magnets)
{
    lli prev_magnet;
    cin >> prev_magnet;
    lli number_of_groups = 1;

    while (number_of_magnets)
    {
        lli new_magnet;
        cin >> new_magnet;

        if (new_magnet != prev_magnet)
        {
            prev_magnet = new_magnet;
            number_of_groups++;
        }

        number_of_magnets--;
    }

    cout << number_of_groups << endl;
}

int main(int argc, char const *argv[])
{
    lli number_of_magnets;
    cin >> number_of_magnets;

    if (number_of_magnets == 0)
        cout << 0 << endl;
    else
        magnets(number_of_magnets - 1);

    return 0;
}
