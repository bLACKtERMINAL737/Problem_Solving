#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (i % 2 == 0)
        {
            cout << s << endl;
        }
    }
    return 0;
}