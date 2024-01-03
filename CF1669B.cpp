// Triple
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

void Element_Checker()
{
    int n;
    cin >> n;
    vector<int> container;
    map<int, int> counterMap;
    while (n--)
    {
        int value;
        cin >> value;
        container.push_back(value);
    }

    bool b = true;
    for (auto num : container)
    {
        if (++counterMap[num] == 3)
        {
            cout << num << endl;
            b = false;
            break;
        }
    }
    if (b)
        cout << -1 << endl;
}

void Caller()
{
    int n;
    cin >> n;
    while (n--)
    {
        Element_Checker();
    }
}

int main(int argc, char const *argv[])
{
    Caller();
    return 0;
}
