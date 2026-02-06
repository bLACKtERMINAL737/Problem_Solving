#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<string>s;
    for (int i = 0; i < n; i++)
    {
        string s1;
        cin>>s1;
        if(!s.count(s1))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        s.insert(s1);
    }
    return 0;
}