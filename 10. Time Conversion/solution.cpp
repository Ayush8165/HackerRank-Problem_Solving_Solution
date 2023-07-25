#include <bits/stdc++.h>
using namespace std;

string convert(string time)
{
    if (time[time.length() - 2] == 'A')
    {
        time.pop_back();
        time.pop_back();
        if (time[0] == '1' and time[1] == '2')
        {
            time[0] = '0';
            time[1] = '0';
        }
        return time;
    }
    else
    {
        time.pop_back();
        time.pop_back();

        if (time[0] == '1' and time[1] == '2')
        {
            return time;
        }

        int t1 = time[0] - 48;
        int t2 = time[1] - 48;
        int t = t1 * 10 + t2 + 12;

        time[1] = (t % 10) + 48;
        t = t / 10;
        time[0] = (t % 10) + 48;

        return time;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string time;
    cin >> time;
    cout << convert(time);
}