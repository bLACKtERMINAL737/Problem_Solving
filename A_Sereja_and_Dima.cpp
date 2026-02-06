#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int left = 0, right = n - 1;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[left] >= v[right])
        {
            if (i % 2 == 0)
            {
                sum1 += v[left++];
            }
            else
            {
                sum2 += v[left++];
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                sum1 += v[right--];
            }
            else
            {
                sum2 += v[right--];
            }
        }
    }
    cout << sum1 << " " << sum2;
    return 0;
}
