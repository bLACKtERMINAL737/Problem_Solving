#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> s(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0; i < x; i++)
    {
        if (!s.count(i))
        {
            cnt++;
        }
    }
    if (s.count(x))
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
