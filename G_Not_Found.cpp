#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' + i)
        {
            cout << char('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
