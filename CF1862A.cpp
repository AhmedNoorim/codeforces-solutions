// Gift Carpet
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

void Case_Evaluation()
{
    int n, m;
    cin >> n >> m;
    vector<string> str_vector;

    int nn = n;
    while (nn--)
    {
        string str;
        cin >> str;
        str_vector.push_back(str);
    }

    string name = "vika";
    int name_index = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (name[name_index] == str_vector[j][i])
            {
                ++name_index;
                break;
            }
        }
    }

    cout << (name_index == 4 ? "YES" : "NO") << endl;
}

void Caller()
{
    int n;
    cin >> n;
    while (n--)
    {
        Case_Evaluation();
    }
}

int main(int argc, char const *argv[])
{
    Caller();
    return 0;
}
