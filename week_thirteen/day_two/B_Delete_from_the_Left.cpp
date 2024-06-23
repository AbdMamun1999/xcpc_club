#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int n = b.size();

    a.reserve();
    b.reserve();

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << b[i] << endl;
    }

    return 0;
}