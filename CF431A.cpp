// A black square
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a;
    for (int i = 0; i < 4; i++)
    {
        int var;
        cin >> var;
        a.push_back(var);
    }

    // cin.ignore(1000);
    string str_var;
    cin >> str_var;

    int calory = 0;
    for (int i = 0; i < str_var.size(); i++)
    {
        switch (str_var[i])
        {
        case '1':
            calory += a[0];
            break;
        case '2':
            calory += a[1];
            break;
        case '3':
            calory += a[2];
            break;
        case '4':
            calory += a[3];
            break;

        default:
            break;
        }
    }

    cout << calory;

    return 0;
}
