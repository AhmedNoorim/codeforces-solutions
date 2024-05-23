// Division?
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int Division_Checker(int x)
{
    if (x >= 1900)
        return 1;
    else if (x >= 1600)
        return 2;
    else if (x >= 1400)
        return 3;
    else
        return 4;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    while (n != 0)
    {
        int rating;
        cin >> rating;
        cout << "Division " << Division_Checker(rating) << endl;
        --n;
    }

    return 0;
}
