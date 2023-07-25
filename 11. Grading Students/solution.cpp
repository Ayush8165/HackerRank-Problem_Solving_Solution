#include <bits/stdc++.h>
using namespace std;

int multiple(int n)
{
    int i = 7;
    while (5 * i <= n)
    {
        i++;
    }

    if ((5 * i) - n < 3)
    {
        return (5 * i);
    }
    else
    {
        return n;
    }
}

vector<int> roundUp(vector<int> arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 38)
        {
            ans.push_back(arr[i]);
        }
        else
        {
            int temp = multiple(arr[i]);
            ans.push_back(temp);
        }
    }
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> grades;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        grades.push_back(temp);
    }

    vector<int> answer;
    answer = roundUp(grades);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }

    return 0;
}