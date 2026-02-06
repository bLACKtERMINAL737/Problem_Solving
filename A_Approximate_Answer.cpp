#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, m;
    cin >> x >> y >> m;
    if (abs(x - y) <= m)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}