#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    sum1 = a + a - 1;
    sum2 = b + b - 1;
    sum3 = a + b;
    int mx = max(sum1, max(sum2, sum3));
    cout << mx << endl;
    return 0;
}