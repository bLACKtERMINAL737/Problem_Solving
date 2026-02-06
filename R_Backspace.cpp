#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string s1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            if (!s1.empty())
            {
                s1.pop_back();
            }
        }
        else
        {
            s1.push_back(s[i]);
        }
    }
    cout << s1;
    return 0;
}
