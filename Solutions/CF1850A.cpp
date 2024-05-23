// To My Critics
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

/* ---Time Limit---
void Case_Checker()
{
    int bucket, a = 0, b = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> bucket;
        if (bucket > a)
            a = bucket;
        if (a > b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
    }
    cout << (a + b >= 10 ? "YES" : "NO") << endl;
}
*/

void Case_Checker()
{
    int a = 0, b = 0, c = 0;

    cin >> b >> c;
    if (b > c)
        swap(b, c);

    cin >> a;
    if (a > b)
        swap(a, b);

    cout << (b + c >= 10 ? "YES" : "NO") << endl;
}

void Caller()
{
    int n;
    cin >> n;
    while (n--)
    {
        Case_Checker();
    }
}

int main(int argc, char const *argv[])
{
    Caller();
    return 0;
}
