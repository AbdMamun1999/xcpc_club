#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        vector<int> newArr;
        for (int i = 1; i < n; i++)
        {
            if (v[i] % v[0] != 0)
                newArr.push_back(v[i]);
        }

        bool flag = true;
        sort(newArr.begin(), newArr.end());
        for (int i = 1; i < newArr.size(); i++)
        {
            if (newArr[i] % newArr[0] != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}