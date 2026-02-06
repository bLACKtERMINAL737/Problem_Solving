#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[5];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        int sq=0;
        for (int i = 0; i < 4; i++)
        {
            if (a[i]!=a[0])
            {
                sq = 1;
                break;
            }
        }
        if (sq==0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
