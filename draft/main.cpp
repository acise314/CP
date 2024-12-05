#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    while (x != 0)
    {
        if (x > 1000 || x < -1000)
        {
            cout << x << endl;
        }
        sum += x;
        cin >> x;
    }
    cout << sum << endl;
}