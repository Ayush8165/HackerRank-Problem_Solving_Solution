#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // Home range
    int s, t;
    cin >> s >> t;

    // Apple and orange pt
    int a, b;
    cin >> a >> b;

    // No of apple and orange
    int m, n;
    cin >> m >> n;

    int countA = 0, countO = 0;

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        temp = temp + a;
        if (s <= temp and temp <= t)
        {
            countA++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp = temp + b;
        if (s <= temp and temp <= t)
        {
            countO++;
        }
    }

    cout << countA << endl
         << countO;

    return 0;
}