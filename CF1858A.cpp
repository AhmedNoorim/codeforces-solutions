// Buttons
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

/*---Time Limit Exceeded---
void Case_Evaluation()
{
    int a, b, c;
    cin >> a >> b >> c;

    int n = a + b + c;
    string turn = "Anna";
    while (n--)
    {
        if (turn == "Anna" && a != 0)
        {
            --a;
            turn = "Kaite";
        }
        else if (turn == "Kaite" && b != 0)
        {
            --b;
            turn = "Anna";
        }
        else
        {
            if (turn == "Anna" && a == 0)
            {
                --c;
                turn = "Kaite";
            }
            else if (turn == "Kaite" && b == 0)
            {
                --c;
                turn = "Anna";
            }
        }
    }

    cout << (turn == "Kaite" ? "First" : "Second") << endl;
}*/

/*---WRONG---
void Case_Evaluation()
{
    int a, b, c;
    cin >> a >> b >> c;

    int turn = 0;
    if (a == b)
    {
        turn = c % 2;
    }
    else
    {
        int d = a - b;
        if (d > 0 && c < abs(d))
        {
            turn = 1;
        }
        else if (d < 0 && c < abs(d))
        {
            turn = 0;
            b = abs(d);
        }
        else
        {
            turn = (c - abs(d)) % 2;
        }
    }

    cout << (turn == 1 ? "First" : "Second") << endl;
}*/

void Case_Evaluation()
{
    int a, b, c;
    cin >> a >> b >> c;
    int anna = a + ceil(c / 2.0);   // for fraction anna gets extra 1 move
    int kaite = b + floor(c / 2.0); // for fraction kaite gest 1 less move

    cout << (anna > kaite ? "First" : "Second") << endl;
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
