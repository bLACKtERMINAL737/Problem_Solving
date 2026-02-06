#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    reverse(s.begin(),s.end());
    unordered_set<string>s1; 
    for(auto &x:s)
    {   
        if(!s1.count(x))
        cout<<x<<endl;
        s1.insert(x);
    }
    return 0;
}
