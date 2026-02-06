#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int first = s.find('B');
        int last = s.rfind('B');
        int cnt = last-first;
        cout<<cnt+1<<endl;
    }
    return 0;
}