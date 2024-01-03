// Escalator Conversations
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

void Case_Evaluation()
{
    int n, m, k, H;
    cin >> n >> m >> k >> H;

    int count = 0;
    while (n--)
    {
        int h;
        cin >> h;
        if (h > H)
        {
            if (0 == (h - H) % k && m > (h - H) / k)
                ++count;
        }
        else if (h < H)
        {
            if (0 == (H - h) % k && m > (H - h) / k)
                ++count;
        }
        else
            continue;
    }

    cout << count << endl;
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
