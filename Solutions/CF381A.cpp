// Sereja and Dima
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> cards;
    while (n != 0)
    {
        int input;
        cin >> input;
        cards.push_back(input);
        --n;
    }

    int sejera = 0, dima = 0;
    bool turn = 1;
    while (!cards.empty())
    {
        if (cards[0] >= cards[cards.size() - 1])
        {
            if (turn)
            {
                sejera += cards.front();
                cards.erase(cards.begin());
                turn = 0;
            }
            else
            {
                dima += cards.front();
                cards.erase(cards.begin());
                turn = 1;
            }
        }
        else
        {
            if (turn)
            {
                sejera += cards.back();
                cards.pop_back();
                turn = 0;
            }
            else
            {
                dima += cards.back();
                cards.pop_back();
                turn = 1;
            }
        }
    }

    cout << sejera << " " << dima;

    return 0;
}
