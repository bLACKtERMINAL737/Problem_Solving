#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<string> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    map<string, int> freq;
    for (int i = 0; i < t; i++)
    {
        freq[v[i]]++;
        if (freq[v[i]] == 1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << v[i] << freq[v[i]]-1 << endl;
        }
    }
    return 0;
}