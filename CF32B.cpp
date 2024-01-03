// Borze
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void Decoder(string &var)
{
    string output_str = "";
    for (int i = 0; i < var.size(); i++)
    {
        if (var[i] == '.')
            output_str += "0";
        else if (var[i] == '-')
        {
            if (var[i + 1] == '.')
                output_str += "1";
            else
                output_str += "2";
            ++i;
        }
    }

    cout << output_str;
}

int main(int argc, char const *argv[])
{
    string str_var;
    cin >> str_var;
    Decoder(str_var);
    return 0;
}
