#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void Yes_Checker(string &str)
{
    for (auto &c : str)
    {
        c = toupper(c);
    }
    cout << (str == "YES" ? "YES" : "NO") << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    string str_var;
    for (int i = 0; i < n; i++)
    {
        cin >> str_var;
        Yes_Checker(str_var);
    }

    return 0;
}
