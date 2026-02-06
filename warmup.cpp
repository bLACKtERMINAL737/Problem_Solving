#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc)
    {
        int N;
        cin >> N;
        vector<int> A(N + 1), B(N + 1);
        for (int i = 1; i <= N; ++i)
            cin >> A[i];
        for (int i = 1; i <= N; ++i)
            cin >> B[i];
        bool impossible = false;
        for (int i = 1; i <= N; ++i)
            if (A[i] > B[i])
            {
                impossible = true;
                break;
            }
        if (impossible)
        {
            cout << "Case #" << tc << ": -1\n";
            continue;
        }
        vector<vector<int>> pos(N + 1);
        for (int i = 1; i <= N; ++i)
            pos[B[i]].push_back(i);
        vector<pii> ops;
        for (int v = N; v >= 1; --v)
        {
            if (pos[v].empty())
                continue;
            int src = -1;
            for (int idx : pos[v])
                if (A[idx] == v)
                {
                    src = idx;
                    break;
                }
            if (src == -1)
            {
                impossible = true;
                break;
            }
            for (int idx : pos[v])
            {
                if (A[idx] != v)
                {
                    ops.emplace_back(src, idx);
                    A[idx] = v;
                }
            }
        }
        if (impossible)
        {
            cout << "Case #" << tc << ": -1\n";
        }
        else
        {
            cout << "Case #" << tc << ": " << ops.size() << "\n";
            for (auto &p : ops)
                cout << p.first << " " << p.second << "\n";
        }
    }
}
