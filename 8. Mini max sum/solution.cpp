#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    long long int sum = 0;
    vector<int> array;
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        sum += input;
        array.push_back(input);
    }

    sort(array.begin(), array.end());

    cout << sum - array[4] << " " << sum - array[0];
    return 0;
}