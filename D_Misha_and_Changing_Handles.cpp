#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<string, string> name;
    while (t--)
    {
        string old_name, new_name;
        cin >> old_name >> new_name;
        int found = 0;
        for (auto p = name.begin(); p != name.end(); p++)
        {
            if (p->second == old_name)
            {
                p->second = new_name;
                found = 1;
                break;
            }
        }
        if (!found)
        {
            name[old_name] = new_name;
        }
    }
    cout << name.size() << endl;
    for (auto p : name)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}