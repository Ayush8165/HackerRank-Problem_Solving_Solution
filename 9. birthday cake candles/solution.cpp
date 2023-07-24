#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int temp;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int max = arr[size - 1];

    int i;
    int count = 0;
    for (i = size - 1; i > -1; i--)
    {
        if (arr[i] == max)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count;

    return 0;
}