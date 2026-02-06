#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        int ans = cnt2 + (cnt1 + 1) / 2;
        cout << ans << endl;
    }
    return 0;
}